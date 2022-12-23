#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int origin = n;
    int reverse = 0;
    while (origin > 0) {
        reverse *= 10;
        reverse += origin % 10;
        origin /= 10;
    }
    if (reverse == n) {
        printf("yes");
    } else {
        printf("no");
    }
    return 0;
}
