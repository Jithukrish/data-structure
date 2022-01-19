#define size 10
#include<stdio.h>
#include<stdlib.h>
int front=0;
int rear=0;
int q[size];
int flag;
void main()
{
void insert(int);
int delet();
int search(int);
int c,d,k=0;

do
{
printf("1.insertion\n");
printf("2.deletion\n");
printf("3.search\n");
printf("4.exit\n");
printf("enter the option :");
scanf("%d",&c);
switch(c)
{
case 1:printf("enter the item to be insert:");
       scanf("%d",&d);
       insert(d);
       break;
case 2:d=delet();
       if(flag==1)
       printf("deleted item is:%d\n",d);
      
       break;
case 3:printf("enter the value to search:\n");
       scanf("%d",&d);
       k=search(d);
       if(k==0)
       printf("item not found...\n");
       else
       printf("item found..\n");
       break;
case 4:printf("exiting...\n");
      exit(0);
}
}
while(1);
}
void insert(int x)
{
int t;
t=(rear+1)%size;
if(front==t)
{
printf("queue is full..\n");
}
else
{rear=t;
q[rear]=x;
printf("item inserted..\n");
}
}
int delet()
{
int r;
if(front==rear)
{
printf("queue empty...\n");
flag=0;
}
else
{
flag=1;
front=(front+1)%size;
return q[front];
}

}
int search(int item)
{
int f,r;
f=front;
r=rear;
while(f!=r)
{
f=(f+1)%size;
if(q[f]==item)
{
return 1;
}
}
return 0;

}



