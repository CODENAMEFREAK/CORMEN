#ifndef CIRCULARQUEUE_H_INCLUDED
#define CIRCULARQUEUE_H_INCLUDED

#define CIRCULARQUEUE_SIZE 5

int CIRCULAR_QUEUE[CIRCULARQUEUE_SIZE];

int cir_f=-1;
int cir_r=-1;

int CIR_ENQUEUE(int element)
{
    if((cir_r+1)%CIRCULARQUEUE_SIZE == cir_f)
    {
        printf("OVERFLOW");
        return -1;
    }
    else
        {
        cir_r=(cir_r+1) %CIRCULARQUEUE_SIZE;
        CIRCULAR_QUEUE[cir_r]=element;
         if(cir_f==-1)
            cir_f=0;
         return 1;
    }
}

int CIR_DEQUEUE()
{
    if(cir_f==-1)
    {
        printf("UNDERFLOW");
        return -1;
    }
    else
        {
            int ele = CIRCULAR_QUEUE[cir_f];
            if(cir_f==cir_r)
            {
                cir_f=cir_r=-1;
            }
            else{
            cir_f =(cir_f+1)%CIRCULARQUEUE_SIZE;
            }
            return ele;
        }
}

#endif // CIRCULARQUEUE_H_INCLUDED
