#include <stdio.h>
#include <stdlib.h>

// CREATING A LINKED LIST
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

// CREATE LL
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// DISPLAY LL
void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    printf("Enter number of elements in the linked list: ");
    int n;
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    create(A, n);
    display(first);
    

    return 0;
}