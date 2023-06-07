#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int data;
    struct link *next;
} *Link;

Link AppendNode(Link head, int data);
void DisplyNode(Link head);

int main()
{
    int data;
    Link head = NULL;
    while (1)
    {
        scanf("%d", &data);
        if (data == -1)
            break;
        head = AppendNode(head, data);
    }
    DisplyNode(head);
    return 0;
}

/*在此实现 AppendNode函数 */
Link AppendNode(Link head, int data)
{
    Link p = (Link)malloc(sizeof(struct link));
    p->data = data;
    p->next = NULL;
    if (head == NULL)
        head = p;
    else
    {
        Link q = head;
        while (q->next != NULL)
            q = q->next;
        q->next = p;
    }
    return head;
}

/*在此实现DisplyNode函数 */
void DisplyNode(Link head)
{
    if (head == NULL)
    {
        puts("NULL");
        return;
    }
    Link p = head, q = head->next;
    while (p != NULL)
    {
        if (q == NULL)
        {
            printf("%d", p->data);
            break;
        }
        else
        {
            printf("%d,", p->data);
            p = q;
            q = q->next;
        }
    }
}