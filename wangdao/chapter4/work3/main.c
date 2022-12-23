#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 20; j++) {
            for (int k = 1; k <= 50; k++) {
                for (int l = 1; l <= 100; l++) {
                    if (i * 10 + j * 5 + k * 2 + l == 100 && i + j + k + l == 40) {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}
