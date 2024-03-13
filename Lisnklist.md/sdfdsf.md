##  Dynamic Memory Allocation for Integer-Character Structures

```cpp
#include <stdio.h>
#include <stdlib.h>

typedef struct intr {
    int a;
    char b[100]; //buffer 
} t;

int main() {
    int num; 
    printf("ENTER NUMBER OF INTEGERS: ");
    scanf("%d", &num);
    t *ptr = (t *)malloc(num * sizeof(t)); // Allocate memory for num structures

    for (int i = 0; i < num; i++) {
        printf("ENTER INT: ");
        scanf("%d", &ptr[i].a);
        printf("ENTER CHAR: ");
        scanf("%s", ptr[i].b);
    }

    for (int i = 0; i < num; i++) {
        printf("\n______________________________________\n");
        printf("VALUE: %d\nCHAR: %s\n ", ptr[i].a, ptr[i].b);
    }

    // Free allocated memory
    free(ptr);
    ptr = NULL;
    return 0;
}
```
**Explanation:**
This C program dynamically allocates memory for a user-defined number of integer-character structures. It prompts the user to input integer values and corresponding character strings for each structure, and then prints the stored values. Finally, it frees the allocated memory to prevent memory leaks.

