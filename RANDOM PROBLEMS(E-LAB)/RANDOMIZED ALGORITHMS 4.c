#define MAX_POINT 3
#define ARR_SIZE 100
#include<stdio.h>
void printArray(int arr[], int arr_size);
void printCompositions(int n,int i)
{
static int arr[ARR_SIZE];
if(n==0)
{
printArray(arr,i);
}
else if(n>0)
{
int k;
for(k=1;k<=MAX_POINT;k++)
{
arr[i]=k;
printCompositions(n-k,i+1);
}
}
}
void printArray(int arr[], int arr_size)
{
int i;
for(i=0;i<arr_size;i++)
{
if(i!=arr_size-1)
printf("%d ",arr[i]);
else
{
printf("%d",arr[i]);
printf("\n");
}
}
// printf("\n");
}
int main()
{
int n;// = 5;
scanf("%d",&n);
printf("Differnt compositions formed by 1, 2 and 3 of %d are",n);
printf("\n");
// Differnt compositions formed by 1, 2 and 3 of 4 are
printCompositions(n,0);
return 0;
}
