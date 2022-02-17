#include <iostream>
using namespace std;
int m,n;
void fill(char mat[10][10],int x,int y,char prev,char newv)
{
if(x<0||x>=m||y<0||y>=n) return ;
if(mat[x][y]!=prev) return;
mat[x][y]=newv;
fill(mat,x+1,y,prev,newv);
fill(mat,x-1,y,prev,newv);
fill(mat,x,y+1,prev,newv);
fill(mat,x,y-1,prev,newv);
}
int replace(char mat[10][10])
{
int i,j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(mat[i][j]=='O')
mat[i][j]='-';
for(i=0;i<m;i++)
if(mat[i][0]=='-')
fill(mat,i,0,'-','O');
for(i=0;i<m;i++)
if(mat[i][n-1]=='-')
fill(mat,i,n-1,'-','O');
for(i=0;i<n;i++)
if(mat[0][i]=='-')
fill(mat,0,i,'-','O');
for(i=0;i<n;i++)
if(mat[m-1][i]=='-')
fill(mat,m-1,i,'-','O');
for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(mat[i][j]=='-')
mat[i][j]='X';
}
int main()
{
int t,i,j;
cin>>t;
char mat[10][10];
while(t--)
{
cin>>m>>n;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>mat[i][j];
replace(mat);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cout<<mat[i][j]<<" ";
cout<<endl;
}
return 0;
}
