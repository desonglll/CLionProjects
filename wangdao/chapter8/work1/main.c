#include <stdio.h>

typedef struct Student{
    int num;
    char name[10];
    char gender;
}stu;

int main() {
    stu s1;
    scanf("%d %s %c", &s1.num, s1.name, &s1.gender);
    printf("%d %s %c", s1.num, s1.name, s1.gender);
    return 0;
}
