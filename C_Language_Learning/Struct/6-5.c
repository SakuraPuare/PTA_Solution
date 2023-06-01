#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node
{
    ElementType Data;
    PtrToNode Next;
};
typedef PtrToNode List;

List Read()
{
    int n;
    scanf("%d", &n);
    List head = NULL, p = NULL;
    while (n--)
    {
        List r = (List)malloc(sizeof(struct Node));
        scanf("%d", &r->Data);
        r->Next = NULL;
        if (head == NULL)
            head = r;
        else
            p->Next = r;
        p = r;
    }
    return head;
}

void Print(List L)
{
    List p = L;
    while (p)
    {
        printf("%d ", p->Data);
        p = p->Next;
    }
}
List Insert(List L, ElementType X);

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}

List Insert(List L, ElementType X)
{
    List p = L->Next, q = NULL;
    while (p)
    {
        if (p->Data >= X)
        {
            List r = (List)malloc(sizeof(struct Node));
            r->Data = X;
            r->Next = p;
            if (q == NULL)
                L->Next = r;
            else
                q->Next = r;
            break;
        }
        q = p;
        p = p->Next;
    }
    if (p == NULL)
    {
        List r = (List)malloc(sizeof(struct Node));
        r->Data = X;
        r->Next = NULL;
        if (q == NULL)
            L->Next = r;
        else
            q->Next = r;
    }
    return L;
}