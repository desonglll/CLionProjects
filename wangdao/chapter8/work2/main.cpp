#include <stdio.h>
#include <stdlib.h>

void getString(char *&p) {
    fgets(p, 100, stdin);
}

int main() {
    char *p = (char *) malloc(100);
    getString(p);
    puts(p);
    return 0;
}
