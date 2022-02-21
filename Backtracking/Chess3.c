#include<stdio.h>
#include<math.h>
int board[20],count;
int cnt=0;
int main()
{
int n,i,j;
void queen(int row,int n);
scanf("%d",&n);
queen(1,n);
printf("\nTOTAL SOLN. : %d",cnt);
return 0;
}
//function for printing the solution
int print(int n)
{
int i,j;
printf("\n\nSOLUTION #%d",++count);
cnt=count;
for(i=1;i<=n;++i)
{
printf("\n");
for(j=1;j<=n;++j) //for nxn board
{
if(board[i]==j)
printf("Q "); //queen at i,j position
else
printf("* "); //empty slot
}
printf("\n");
}
return count;
}
/*funtion to check conflicts
If no conflict for desired postion returns 1 otherwise returns 0*/
int place(int row,int column)
{
int i;
for(i=1;i<=row-1;++i)
{
//checking column and digonal conflicts
if(board[i]==column)
return 0;
else
if(abs(board[i]-column)==abs(i-row))
return 0;
}
return 1; //no conflicts
}
//function to check for proper positioning of queen
void queen(int row,int n)
{
int column;
for(column=1;column<=n;++column)
{
if(place(row,column))
{
board[row]=column; //no conflicts so place queen
if(row==n) //dead end
print(n);//printing the board configuration
else //try queen with next position
queen(row+1,n);
}
}
}
