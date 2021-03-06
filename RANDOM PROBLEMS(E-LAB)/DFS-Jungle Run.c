#include <stdio.h>
#include <limits.h>
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
int mat[30][30];
int min=INT_MAX,n;
char arr[30][30];
void minPath(int i,int j,int status,int k)
{
if(arr[i][j]=='T')
{
return;
}
if(arr[i][j]=='E')
{
if(k<min)
min=k;
else
return;
}
if(mat[i][j])
{
if(k<mat[i][j])
{
mat[i][j]=k;
}
else
return;
}
else
mat[i][j]=k;
if(i-1>=0 && status!=DOWN)
{
minPath(i-1,j,UP,k+1);
}
if(i+1<n && status!=UP)
{
minPath(i+1,j,DOWN,k+1);
}
if(j-1>=0 && status!=RIGHT)
{
minPath(i,j-1,LEFT,k+1);
}
if(j+1<n && status!=LEFT)
{
minPath(i,j+1,RIGHT,k+1);
}
}
int main(void) {
int i,j,iE,jE;
char c;
scanf("%d",&n);
c=getchar();
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
arr[i][j]=getchar();
c=getchar();
if(arr[i][j]=='S')
{
mat[i][j]=0;
iE=i;
jE=j;
}
}
}
if(iE-1>=0)
{
minPath(iE-1,jE,UP,1);
}
if(iE+1<n )
{
minPath(iE+1,jE,DOWN,1);
}
if(jE-1>=0)
{
minPath(iE,jE-1,LEFT,1);
}
if(jE+1<n )
{
minPath(iE,jE+1,RIGHT,1);
}
printf("%d",min);
return 0;
}
