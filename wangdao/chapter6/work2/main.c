#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    scanf("%d\n", &size);
    char *p = NULL;
    p = (char *) malloc(size);
//    char c;
//    scanf("%c", &c);
    gets(p);
    puts(p);
    free(p);
    return 0;
}
