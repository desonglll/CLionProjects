#include <stdio.h>
int main() {
    int n=0;
    scanf("%d", &n);
    if(n<65||n>122){
        printf("Please enter a number between 65 and 122.");
    }
    else{
        printf("%c", n);
    }
    return 0;
}
