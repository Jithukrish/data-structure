#include<stdio.h>
void main()
{
void readarr(int[],int);
void disparr(int[],int);
void merge(int[],int[],int[],int,int);
int s1[50],s2[50],s3[100],n,m;
printf("no of element in first array[1-50]:");
scanf("%d",&m);
printf("enter element in first array:");
readarr(s1,m);
printf("no of element in second array:");
scanf("%d",&n);
printf("enter the element in scond array:");
readarr(s2,n);
merge(s1,s2,s3,m,n);
printf("merge array=  \n");
disparr(s3,m+n);
}

//function for reading an array
void readarr(int s[],int n)
{
int i;
printf("enter numbers in non decreasing order:");
for(i=0;i<n;++i)
scanf("%d",&s[i]);
return;
}

//function for displaying an array
void disparr(int s[],int n)
{
int i;
{
for(i=0;i<n;++i)
printf("%d ",s[i]);
}
return;
}
// function for merging
void merge(int s1[],int s2[],int s3[],int m, int n)
{
int i,j,k;
i=j=k=0;
// compare and copy element
while (i<m &&j<n)
if(s1[i]<s2[j])
{
s3[k]=s1[i];
i=i+1;
k=k+1;
}
else
{
s3[k]=s2[j];
j=j+1;
k=k+1;
}
if(i<m)
//copy remaining elements from s1
while(i<m)
s3[k++]=s1[i++];
else
// copy remaining  elements from s2
while(j<n)
s3[k++]=s2[j++];
}
