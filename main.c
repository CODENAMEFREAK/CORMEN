#include <stdio.h>
#include <stdlib.h>
#include "header/Stack.h"
#include "header/Queue.h"
#include "header/CircularQueue.h"
void testStack()
{
    POP();
   for(int i=1;i<=STACK_SIZE+1;i++)
     {
         PUSH(i);
     }
   for(int i=1;i<=STACK_SIZE;i++)
        printf("%d\n",POP());
    POP();
}

void testQueue()
{
    DEQUEUE();
    ENQUEUE(1);
    ENQUEUE(4);
    printf("%d\n",DEQUEUE());
    for(int i=1;i<=QUEUE_SIZE;i++)
        ENQUEUE(i);
    for(int i=1;i<=QUEUE_SIZE+1;i++)
        printf("%d\n",DEQUEUE());

}

void testCircularQueue()
{
    printf("%d\n",CIR_DEQUEUE());
    CIR_ENQUEUE(1);
    CIR_ENQUEUE(2);
    CIR_ENQUEUE(3);
    CIR_ENQUEUE(4);
    CIR_ENQUEUE(5);
    CIR_ENQUEUE(6);
    printf("%d\n",CIR_DEQUEUE());
    CIR_ENQUEUE(7);
     CIR_ENQUEUE(8);
    for(int i=1;i<=CIRCULARQUEUE_SIZE;i++)
        printf("%d\n",CIR_DEQUEUE());

}

/*int main()
{
    //testStack();
    //testQueue();
    //testCircularQueue();
}*/

