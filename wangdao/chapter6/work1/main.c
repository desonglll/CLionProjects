#include <stdio.h>

void change(int i) {
    printf("%d", i / 2);
}

int main() {
    int i;
    scanf("%d", &i);
    change(i);
    return 0;
}
