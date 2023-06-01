#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem(struct ListNode *L, int m);
void printlist(struct ListNode *L)
{
    struct ListNode *p = L;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);
    return 0;
}

struct ListNode *readlist()
{
    int t;
    struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *head = p;
    while (scanf("%d", &t), t != -1)
    {
        struct ListNode *q = (struct ListNode *)malloc(sizeof(struct ListNode));
        q->data = t;
        q->next = NULL;
        p->next = q;
        p = q;
    }
    return head->next;
}

struct ListNode *deletem(struct ListNode *L, int m)
{
    struct ListNode *p = L, *q = NULL;
    while (p)
    {
        if (p->data == m)
        {
            if (q == NULL)
            {
                L = p->next;
                free(p);
                p = L;
            }
            else
            {
                q->next = p->next;
                free(p);
                p = q->next;
            }
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return L;
}
