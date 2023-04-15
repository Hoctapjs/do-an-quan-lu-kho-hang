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