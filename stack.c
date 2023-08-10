// Implement a stack with C.

#include <stdio.h>
#define Cap 3

int stack[Cap];
int top = -1;

int push(int x)
{
    
    if (top < Cap -1) // index starts at 0. so (0,1,2)
    {
        top = top + 1; //top initially = -1, and if a item comes it becomes 0, so the counting begins at index 0.
        stack[top] = x;
        printf("Added item: %d\n", x);
    }
    else
    {
        printf("Stack is full\n");
    }
    return 0;
}

int pop()
{
    if (top >= 0)
    {
        int val = stack[top];
        top = top - 1;
        printf("Popped item: %d\n", val);
        return val;
    }
    else
    {
        printf("Stack is empty\n");
    }
    return -1;
}

int peek()
{
    if (top >= 0)
    {
        return stack[top];
        printf("Top of stack: %d\n", top);
    }
    else
    {
        printf("Stack is empty\n");
    }
    return -1;

}

int main()
{
    printf("Implementing my stack\n");
    push(10);
    push(20);
    push(30);
    pop(30);
    push(100);
    printf ("Top of stack: %d\n", peek());
    return 0;
}