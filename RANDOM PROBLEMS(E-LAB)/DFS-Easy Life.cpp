#include <bits/stdc++.h>
using namespace std;
int vis[100009];
int sp[100009];
int main() {
int n, m; scanf("%d%d", &n, &m);
vector <int> v[100009];
while(m--)
{
int x, y; scanf("%d%d", &x, &y);
v[x].push_back(y);
v[y].push_back(x);
}
float max = -1, e2, v2;
for(int i=1; i<=n; i++)
{
if(vis[i] == 0)
{
queue <int> q;
q.push(i);
vis[i] = 1;
//int count = 0;
float e1 = 0, v1 = 0;
while(!q.empty())
int p = q.front();
q.pop();
v1++;
for(int i=0; i<v[p].size(); i++)
{
if(sp[v[p][i]] == 0)
{
e1 ++;
}
}
sp[p] = 1;
for(int i=0; i<v[p].size(); i++)
{
if(vis[v[p][i]] == 0)
{
vis[v[p][i]] = 1;
q.push(v[p][i]);
}
}
}
float den = e1/v1;
//cout << e1 << " " << v1 << " " << den << endl;
//if(count > max ) max = count;
if(den > max)
{
max = den;
e2 = e1;
v2 = v1;
}
}
}
//printf("%d\n", max);
if(e2/v2 > 1) printf(">1\n");
else {
if(e2 == v2)
{
e2 = 1; v2 = 1;
}
cout << e2 << "/" << v2 << endl;
}
}
