#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 1) {
        return 1;
    }

    FILE *f = fopen(argv[0], "rb");
    if (!f) {
        perror("fopen");
        return 1;
    }

    // Read ELF header
    Elf64_Ehdr ehdr;
    fread(&ehdr, 1, sizeof(ehdr), f);

    // Go to section header table
    fseek(f, ehdr.e_shoff, SEEK_SET);

    // Read all section headers
    Elf64_Shdr *shdrs = malloc(ehdr.e_shentsize * ehdr.e_shnum);
    fread(shdrs, ehdr.e_shentsize, ehdr.e_shnum, f);

    // Read section header string table
    Elf64_Shdr sh_str = shdrs[ehdr.e_shstrndx];
    char *strtab = malloc(sh_str.sh_size);

    fseek(f, sh_str.sh_offset, SEEK_SET);
    fread(strtab, 1, sh_str.sh_size, f);

    // Find .text section
    for (int i = 0; i < ehdr.e_shnum; i++) {
        char *name = &strtab[shdrs[i].sh_name];

        if (strcmp(name, ".text") == 0) {
            printf("Found .text section:\n");
            printf("Offset: %lu\n", shdrs[i].sh_offset);
            printf("Size: %lu bytes\n\n", shdrs[i].sh_size);

            // Read and print .text bytes
            unsigned char *text = malloc(shdrs[i].sh_size);
            fseek(f, shdrs[i].sh_offset, SEEK_SET);
            fread(text, 1, shdrs[i].sh_size, f);

            for (size_t j = 0; j < shdrs[i].sh_size; j++) {
                printf("%02x ", text[j]);
                if ((j + 1) % 16 == 0)
                    printf("\n");
            }

            printf("\n");
            free(text);
            break;
        }
    }

    free(strtab);
    free(shdrs);
    fclose(f);

    return 0;
}
