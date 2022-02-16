#include<iostream>
#include <vector>
#include<stack>
#include<queue>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int m,n;
cin>>m>>n;
int mat[m][n];
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
cin>>mat[i][j];
queue<pair<int,int> > q;
for (int i=0;i<m;i++)
for (int j=0;j<n;j++)
if (mat[i][j])
{
q.push(make_pair(i,j));
}
while(!q.empty())
{
pair<int,int> current = q.front();
q.pop();
int x = current.first,y=current.second;
if (y+1<n && mat[x][y+1] == 0)
mat[x][y+1] = mat[x][y]+1,q.push(make_pair(x,y+1));
if (y-1>=0 && mat[x][y-1] == 0)
mat[x][y-1] = mat[x][y]+1,q.push(make_pair(x,y-1));;
if (x+1<m && mat[x+1][y] == 0)
mat[x+1][y] = mat[x][y]+1,q.push(make_pair(x+1,y));;
if (x-1>=0 && mat[x-1][y] == 0)
mat[x-1][y] = mat[x][y]+1,q.push(make_pair(x-1,y));;
}
for (int i=0;i<m;i++)
for(int j=0;j<n;j++)
cout<<mat[i][j]-1<<" ";
cout<<endl;
}
return 0;
}
