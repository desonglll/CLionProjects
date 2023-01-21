#include <stdio.h>

typedef int ElemType;

typedef struct LinkList {
    ElemType data;
    LinkList *next = nullptr;
    int len = 0;
} LinkList;

void head_insert_element(LinkList *linkList, ElemType e) {
//    头插法
    linkList->len++;
    while (linkList->next != nullptr) {
        linkList = linkList->next;
    }
    LinkList *p = new LinkList();
    p->data = e;
    p->next = linkList->next;
    linkList->next = p;
}

void insert_element(LinkList *linkList, int position, ElemType e) {
    linkList->len++;
    for (int i = 0; i < position - 1; i++) {
        linkList = linkList->next;
    }
    LinkList *p = new LinkList();
    p->data = e;
    p->next = linkList->next;
    linkList->next = p;
}

ElemType delete_element(LinkList *linkList, int position) {
    linkList->len--;
    if (position < 0 || position > linkList->len) {
        printf("Vaild index.");
    }
    for (int i = 0; i < position - 1; i++) {
        linkList = linkList->next;
    }
    LinkList *p = linkList->next;
    int bak = p->data;
    linkList->next = linkList->next->next;
    delete (p);
    return bak;
}

ElemType search_index(LinkList *linkList, int position) {
    if (position < 0 || position > linkList->len) {
        printf("Vaild index.");
        return -1;
    }
    for (int i = 0; i < position; i++) {
        linkList = linkList->next;
    }
    return linkList->data;
}

void printlist(LinkList *l) {
//    printf("len: %d\n", l->len);
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
    while (flag) {
        int n;
        scanf("%d", &n);
        if (9999 == n) {
            flag = !flag;
            break;
        }
        head_insert_element(linkList, n);
    }

    printf("%d\n", search_index(linkList, 2));

    insert_element(linkList, 2, 99);
    printlist(linkList);
    delete_element(linkList, 4);
    printlist(linkList);

    return 0;
}

