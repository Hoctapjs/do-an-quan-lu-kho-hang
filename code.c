// day la file code
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int ItemType;

struct SNode
{
    ItemType info;
    SNode* next;

};

struct SList
{
    SNode* head;
    SNode* tail;
};

SNode* creatsnode(ItemType x)
{
    SNode* p = new SNode;
    if (p == NULL)
    {
        printf("\nkhong the cap phat nut moi!");
        getch();
        return NULL;
    }
    p->info = x;
    p->next = NULL;
    return p;
}

void showsnode(SNode* p)
{
    printf("%4d", p->info);
}

void showmenu()
{
    printf("\n*****************************************");
    printf("\nMenu ");
    printf("\1. tao nut va xuat ra noi dung ");
    printf("\2. huy nut vua tao ");
    printf("\0. thoat ");
    printf("\n*****************************************");
}

void creatslist(SList& s1)
{
    int n;
    ItemType x;
    InitSList(s1);
    do
    {
        printf("so phan tu cua danh sach (n>0): ");
        scanf("%d", &n);
    } while (n <= 0);
    for (int i = 1; int i <= n; int i++)
    {
        printf("nhap phan tu thu %d la: ", i);
        scanf("%d", &x);
        SNode* p = creatsnode(x);
        inserttail(s1, p);
    }
}