---
title: Introduction to C Programming Language
author: Satyam Jay
---

Why Learn C?
---
# Where C is used:
<!-- incremental_lists: true -->
  * Operating systems (Linux kernel)
  * Embedded systems
  * Databases, compilers
  * Performance-critical code

<!-- pause -->
# Relationship to Python:
<!-- incremental_lists: true -->
  * Python interpreter is written in C
  * NumPy / PyTorch core ops are C/C++

<!-- pause -->
# What C gives you that Python hides:
<!-- incremental_lists: true -->
  * Direct memory control
  * Predictable performance
  * No runtime magic

<!-- end_slide -->

First C Program
---
<!-- column_layout: [1, 1] -->

<!-- column: 0 -->
```c
#include <stdio.h>

int main() {
    printf("Hello, world\n");
    return 0;
}
```
<!-- pause -->

<!-- column: 1 -->
# Breaking down the Program
<!-- incremental_lists: true -->
1. `#include <stdio.h>`
  - Makes printf available
2. `int main()`
  - Entry point of program
3. `printf`
  - Prints to standard output
4. `return 0`
  - Tell OS program ran successfully

<!-- end_slide -->

Interpreted vs Compiled
---

<!-- column_layout: [1, 1] -->

<!-- column: 0 -->
# Python (Interpreted)
<!-- incremental_lists: true -->
  - No separate build step
  - Errors happen at runtime
  - Same code runs everywhere (with interpreter)

<!-- pause -->
# C (Compiled)
<!-- incremental_lists: true -->
  - Separate compile step
  - Errors caught before execution
  - Binary is platform-specific

<!-- pause -->

<!-- column: 1 -->
# Compilation Pipeline

1. **Source Code** (`.c`)
2. **Preprocessor**
   - Handles `#include`, `#define`
3. **Compiler**
   - Converts C → machine code
4. **Linker**
   - Combines libraries
5. **Executable Binary**



<!-- end_slide -->

Types
---
<!-- column_layout: [1, 1] -->

<!-- column: 0 -->
```python
x = 10
x = "hello"
```

```c
int x = 10;
x = "hello"; // ❌ compile-time error
```

<!-- pause -->
# Every variable has a fixed type
# Type decides memory size

<!-- column: 1 -->
<!-- pause -->
* `int` → integers
* `float`, `double` → decimals
* `char` → characters

```c
int count = 10;
double price = 9.99;
char grade = 'A';
```


<!-- end_slide -->

Control Flow - I (Conditional)
---
```c
if (x > 0) {
    printf("Positive\n");
}
else if (x == 0){
    printf("Zero\n");
}
else {
    printf("Negative\n");
}
```

<!-- end_slide -->

Control Flow - II (Loop)
---
```c
int i = 0;
while (i<5){
    printf("%d\n", i);
    i++;
}

// Following For statement is equivalent to above while loop
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```


<!-- end_slide -->

Functions
---
```python
def add(a, b):
    return a + b
```

<!-- pause -->
```c
int add(int a, int b) {
    return a + b;
}
```

<!-- pause -->
- Return type is explicit
- Parameter types are fixed


<!-- end_slide -->


Memory Model
---
# Python
1. Automatic memory management
2. Garbage collection
3. References everywhere

# C
1. Manual memory management
2. Stack vs Heap
3. No garbage collector

<!-- pause -->
> C trusts you with memory.

<!-- end_slide -->

Compilation Errors vs Runtime Errors
---
# Compile-time errors
  * Syntax, type mismatch

# Runtime errors
  * Segmentation fault
  * Undefined behavior

<!-- end_slide -->
Next Time
---
# Pointers and Arrays
## Structs and unions
## Stack and heap
## Function Pointers
