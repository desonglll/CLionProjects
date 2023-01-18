#include <stdio.h>

#define MaxSize 50
typedef int ElemType;

typedef struct {
    ElemType data[MaxSize];
    int len;
} SqList;

bool init_sqlist(SqList &sqList) {
    sqList.len = 0;
    sqList.data[sqList.len] = 0;
//    printf("Initial sqlist.\n");
    return true;
}

void print_sqlist(SqList sqList) {
    if (0 == sqList.len) {
        printf("Empty sqlist\n");
    }
    for (int i = 0; i < sqList.len; i++) {
        printf("%3d", sqList.data[i]);
    }
    printf("\n");
}

bool insert_element(SqList &sqList, int pos, ElemType e) {
    if (sqList.len == MaxSize) {
        printf("sqlist full.\n");
        return false;
    }
    if (!pos || pos > sqList.len + 1) {
        printf("false\n");
        return false;
    }
    for (int i = sqList.len - 1; i >= pos - 1; i--) {
        sqList.data[i + 1] = sqList.data[i];
    }
    sqList.data[pos - 1] = e;
    sqList.len++;
//    printf("len: %d, insert %d to position %d.\n", sqList.len, e, pos);
    return true;
}

bool remove_element(SqList &sqList, int pos) {
    if (!pos || pos > sqList.len + 1) {
        printf("false\n");
        return false;
    }

    ElemType e = sqList.data[pos - 1];
    for (int i = pos - 1; i < sqList.len; i++) {
        sqList.data[i] = sqList.data[i + 1];
    }
    sqList.len--;
//    printf("len: %d, remove %d in position %d.\n", sqList.len, e, pos);
    return true;
}

int main(void) {
    int AddElement, RemovePosition;
    scanf("%d", &AddElement);
    scanf("%d", &RemovePosition);

    SqList sqList;
    init_sqlist(sqList);

    insert_element(sqList, sqList.len + 1, 1);
    insert_element(sqList, sqList.len + 1, 2);
    insert_element(sqList, sqList.len + 1, 3);
    insert_element(sqList, 2, AddElement);
    print_sqlist(sqList);
    if(remove_element(sqList, RemovePosition)){
        print_sqlist(sqList);
    }


    return 0;
}