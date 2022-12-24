#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    gets(a);
    char b[20];
    for (int i = strlen(a) - 1, j = 0; i >= 0, j < strlen(a); i--, j++) {
        b[j] = a[i];
    }
    b[strlen(a)] = '\0';
    int result = strcmp(a, b);
    if (result < 0) {
        printf("%d\n", -1);
    } else if (result > 0) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
//    puts(a);
//    puts(b);
    return 0;
}
