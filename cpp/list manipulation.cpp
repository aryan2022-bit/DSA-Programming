#include <stdio.h>
#define MAX 10
// static list manipulation through stack
typedef struct
{
    int data[MAX];
    int top;
} stack;

void init(stack *s1)
{
    s1->top = -1;  // No data in stack
}

void push(stack *s1, int x)
{
    if (full(s1))
    {
        printf("Stack Overflow! Cannot push %d\n", x);
        return;
    }
    (s1->top)++;
    *(s1->data + s1->top) = x; 
}

int pop(stack *s1)
{
    if (empty(s1))
    {
        printf("Stack Underflow! No elements to pop.\n");
        return -1;  // Error value
    }
    int x = *(s1->data + s1->top);
    (s1->top)--;
    return x;
}

int empty(stack *s1)
{
    return s1->top == -1;
}
int full(stack *s1)
{
    return s1->top == MAX - 1;  // this is will return T/F  0/1
}
int main()
{
    int i, x;
    stack s1;
    init(&s1);

    for (i = 0; i < MAX; i++)
    {
        printf("Enter data for stack: ");
        scanf("%d", &x);
        push(&s1, x);
    }
    printf("\nStack pop data: ");
    for (i = 0; i < MAX; i++)
    {
        printf("%4d", pop(&s1));
    }
    return 0;
}
//List manipulation through stack
