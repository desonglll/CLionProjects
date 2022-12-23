#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    if (i >= 1 && i <= 10) {
        int factor = 1;
        while (i > 0) {
            factor *= i;
            i--;
        }
        printf("%d", factor);
    } else {
        printf("Please enter the number between 1 and 10.");
    }
    return 0;
}
