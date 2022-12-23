#include <stdio.h>

int main() {
    int i;
    char j;
    float k;
    scanf("%d %c %f", &i, &j, &k);
    printf("%.2f", (float)i+j+(float)k);
    return 0;
}
