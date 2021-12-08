#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left,*right;
};
struct node*start=(struct node*)0;
void main()
{
void insert(int);
struct node*search (int);
void delet(int);
struct node*temp;
int c,a,b;
do
{
printf("\n");
printf("********************doubly linked list********************\n");
printf("1.insert\n");
printf("2.search\n");
printf("3.delet\n");
printf("4.exit\n");
printf("enter the option \n");
scanf("%d",&c);
switch(c)
{
case 1:printf("enter some data:");
       scanf("%d",&a);
       insert(a);
       break;
case 2:printf("enter item is:");
       scanf("%d",&b);
       temp=search (b);
       if(temp==(struct node*)0)
       printf("not found");
       else 
       printf(" item found");
       break;
case 3:printf("enter number to be removed:");
       scanf("%d",&a);
       delet(a);
        break;
case 4:printf("existing...\n");
exit(0);
}
}
while(1);
}       
// function  insert a node at the begining of
void insert(int x)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
if(start==(struct node*)0)
{
newnode->left=newnode->right=(struct node*)0;
start=newnode;
}
else
{
newnode->left=(struct node*)0;
newnode->right =start;
start->left=newnode;
start=newnode;
}
}
// function to search an item
struct node*search(int d)
{
struct node *ptr;
ptr=start;
while(ptr!=(struct node*)0 && ptr->data!=d)
{

ptr=ptr->right;
}
return ptr;

}
//the function to delet
void delet (int x)
{
struct node*t;
t=search (x);
if(t==0)

{
printf("not found");
}
else
{
  if(t==start)

    //case of first node
    if(t->right==(struct node*)0)
    {
//only on
     start=(struct node*)0;
//other node
    }
    else
      {
      t->right->left=(struct node*)0;
      start=t->right;
      
}
 else if (t->right==(struct node*)0) //case of last node
{      
t->left->right=NULL;
}
else
//case of an interior node
{
t->left->right=t->right;
t->right->left=t->left;
}
}
free(t);


}
  

