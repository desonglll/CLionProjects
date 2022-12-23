#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    if(1<=n && n<=10000) {
        if (n % 100 != 0 && n % 4 == 0 || n % 400 == 0) {
            printf("yes");
        } else {
            printf("no");
        }
    }
    return 0;
}
