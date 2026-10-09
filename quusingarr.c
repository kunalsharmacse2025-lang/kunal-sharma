#include<stdio.h>
#define size 5
int Q[size];
int F=-1;
int R=-1;
void Enqueue(int x)
{
    if(R==size-1){
        printf("queue is full");
    }
    else
    {
        R=R+1;
        Q[R]=x;
    }
    if(F==-1){
        F=0;
    }
}
void Dequeue()
{
    if(R==-1 && F==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Deleted element is %d\n",Q[F]);
        F=F+1;
    }
}
void main()
{
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Dequeue();
    Dequeue();
    Enqueue(25);
}