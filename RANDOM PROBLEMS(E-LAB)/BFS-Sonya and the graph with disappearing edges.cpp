#include <bits/stdc++.h>
using namespace std;
int inf = 100000000;
int visited[100010], timee[100010];
vector<int> v[100001];
map<pair<int, int>, int> mp;
int main()
{
int n, m, tq;
cin >> n >> m >> tq;
for(int i=0; i<=n; i++)
{
visited[i] = 0;
timee[i] = INT_MAX;
}
for(int i=1; i<=m; i++)
{
int a, b;
cin >> a >> b;
mp[make_pair(a, b)] = i;
mp[make_pair(b, a)] = i;
v[a].push_back(b);
v[b].push_back(a);
timee[i] = inf;
}
while(tq--)
{
int a, b;
cin >> a >> b;
timee[b] = a;
}
queue<pair<int, int> > q;
q.push(make_pair(1, 0));
visited[1] = 1;
int ans = -1;
while(!q.empty())
{
int a = q.front().first;
int b = q.front().second;
q.pop();
if(a==n)
{
ans = b;
break;
}
for(int i=0; i<v[a].size(); i++)
{
if(visited[v[a][i]]==0 && timee[mp[make_pair(a, v[a][i])]]>=(b+1))
{
q.push(make_pair(v[a][i], b+1));
visited[v[a][i]] = 1;
}
}
}
cout << ans << endl;
//cout << "Hello world!" << endl;
return 0;
}
