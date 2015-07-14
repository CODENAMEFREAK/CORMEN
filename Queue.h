#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define QUEUE_SIZE 100

int f = -1 ;
int r = -1;

int QUEUE[QUEUE_SIZE];

int ENQUEUE(int element)
{
        if(r==QUEUE_SIZE-1)
        {
            printf("OVERFLOW");
            return -1;
        }
        else{
            QUEUE[++r]=element;
            if(f==-1)
                f=0;
            return 1;
        }
}

int DEQUEUE()
{
    if(f==-1)
    {
        printf("UNDERFLOW");
        return -1;
    }
    else{
        int ele = QUEUE[f];
        if(f==r)
        {
            f=r=-1;
        }
        else{
                f++;
        }
        return ele;
    }
}
#endif // QUEUE_H_INCLUDED
