#include <stdio.h>

typedef int ElemType;

typedef struct LinkList {
    ElemType data = -1;
    LinkList *next = NULL;
};

void head_insertion(LinkList *linkList, ElemType e) {
    LinkList *insert = new LinkList();
    insert->data = e;
    insert->next = linkList->next;
    linkList->next = insert;
}

void tail_insertion(LinkList *linkList, ElemType e) {
    LinkList *insert = new LinkList();
    insert->data = e;
    while (NULL != linkList->next) {
        linkList = linkList->next;
    }
    insert->next = linkList->next;
    linkList->next = insert;
}

void print_list(LinkList *linkList) {
    LinkList *p = linkList->next;
    while (p != NULL) {
        printf("%d", p->data);
        p = p->next;
        if (p != NULL) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(void) {

    LinkList *linkList1 = new LinkList();
    bool flag = true;
    while (flag) {
        int n;
        scanf("%d", &n);
        if (9999 == n) {
            flag = !flag;
            break;
        }
        head_insertion(linkList1, n);
    }

    LinkList *linkList2 = new LinkList();
    flag = true;
    while (flag) {
        int n;
        scanf("%d", &n);
        if (9999 == n) {
            flag = !flag;
            break;
        }
        tail_insertion(linkList2, n);
    }

    print_list(linkList1);
    print_list(linkList2);


    return 0;
}