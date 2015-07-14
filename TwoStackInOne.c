#include<stdio.h>
#define MEMORY_SIZE 10
/**
    Implementing two stacks in one .
    Stack is numbered from 0 1 2 .... n-1
*/
int MEMORY[MEMORY_SIZE]; //Total of 11 cells are required
int top_left=-1;
int top_right = MEMORY_SIZE;

int enqueueLeft(int element)
{
    if(top_left+1==top_right)
    {
        printf("OVERFLOW");
        return -1;
    }
    else{
        MEMORY[++top_left] = element;
        return 1;
    }

}
int dequeueLeft()
{
    if(top_left==-1)
    {
        printf("Left Stack Underflowed.");
        return -1;
    }
    else{
        int ele= MEMORY[top_left--];
        return ele;
    }
}
int enqueueRight(int element)
{
if(top_left+1==top_right)
    {
        printf("OVERFLOW");
        return -1;
    }
    else{
        MEMORY[--top_right]=element;
        return 1;
            }
}
int dequeueRight()
{
    if(top_right==MEMORY_SIZE)
    {
        printf("Right Stack Underflowed.");
        return -1;
    }
    else{
        int ele = MEMORY[top_right++];
         return ele;
    }
}
int main()
{
    dequeueLeft();
    dequeueRight();

    for(int i=1;i<=3;i++)
        enqueueLeft(i);
    for(int i=4;i<=MEMORY_SIZE;i++)
        enqueueRight(i);
    for(int i=1;i<=MEMORY_SIZE;i++)
        printf("%d\n",dequeueLeft());
    for(int i=1;i<=MEMORY_SIZE;i++)
        printf("%d\n",dequeueRight());
}
