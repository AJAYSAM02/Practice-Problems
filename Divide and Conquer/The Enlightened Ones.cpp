#include<bits/stdc++.h>
using namespace std;
bool isPossible(int center, int tem[], int k, int n)
{
int distance = 0 , p = 0 , yes=1 , finish=0;
for (int i = 0; i < k; i++)
{
yes=1;
distance = tem[p] + 2*center;
auto up = upper_bound(tem, tem + n, distance)-tem;
p = up;
if(p==n)
return 1;
}
return 0;
}
int tem[1000010];
int main()
{
long long n, k;
cin >> n >> k;
for (int i = 0; i < n; i++)
cin >> tem[i];
sort(tem, tem + n);
int max = (tem[n - 1] - tem[0]);
int center = max / 2 , min = 0 , check = 2;
while (1)
{
if (check == 1)
{
max = center;
center = (max + min) / 2;
}
if (check == 0)
{
min = center + 1;
center = (min + max) / 2;
}
if (max == min)
break;
check = isPossible(center, tem, k, n);
}
cout << min;
cout << '\n';
return 0;
}
