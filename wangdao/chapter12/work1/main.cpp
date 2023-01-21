#include <stdio.h>

typedef int ElemType;

typedef struct LinkList {
    ElemType data;
    LinkList *next = nullptr;
} LinkList;

void insert_element(LinkList *linkList, ElemType e) {
    LinkList *p = new LinkList();
    p->data=e;
    p->next= linkList->next;
    linkList->next=p;
}

void printlist(LinkList *l) {
    l = l->next;
    while (l != nullptr) {
        printf("%3d", l->data);//打印当前结点数据
        l = l->next;//指向下一个结点
    }
    printf("\n");
}

int main(void) {
    LinkList *linkList = new LinkList();

    bool flag = true;
    while(flag){
        int n;
        scanf("%d",&n);
        if(9999==n){
            flag=!flag;
        }
        insert_element(linkList,n);
    }
    printlist(linkList);

    return 0;
}

