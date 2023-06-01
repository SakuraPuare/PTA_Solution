#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for (p = head; p != NULL; p = p->next)
        printf("%d ", p->data);
    printf("\n");

    return 0;
}

struct ListNode *createlist()
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p = head;
    head->next = NULL;
    int t;
    while (scanf("%d", &t), t != -1)
    {
        struct ListNode *q = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (p->next == NULL)
            q->data = t, p->next = q;
        else
            q->data = t, q->next = p->next, p->next = q;
    }
    return head->next;
}