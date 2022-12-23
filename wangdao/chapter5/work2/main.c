#include <stdio.h>
#include <string.h>

int main() {
    printf("Hello, World!\n");

    int result = strcmp(c, d);
    if (result < 0) {
        printf("%d\n", -1);
    } else if (result > 0) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
    return 0;
}
