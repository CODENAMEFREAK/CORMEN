#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define STACK_SIZE 100

int TOP=-1;

int STACK[STACK_SIZE];

int PUSH(int element)
{
    if(TOP==STACK_SIZE-1)
    {
        printf("OVERFLOW");
        return -1;
    }
    else{
        STACK[++TOP]= element;
        return 1;
    }
}

int PEEK()
{
    return STACK[TOP];
}

int POP()
{
    if(TOP==-1)
    {
        printf("UNDERFLOW");
        return -1;
    }
    else{
        int ele=STACK[TOP];
        TOP--;
        return ele;
    }
}

#endif // STACK_H_INCLUDED
