#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
return (a > b) ? a : b;
}
int knapSack(int W, int wt[], int val[], int n)
{
int i, w;
int K[n + 1][W + 1];
int ans=0,ans1=0;
for (i = 0; i <= n; i++)
for (w = 0; w <= W; w++)
{
if (i == 0 || w == 0)
K[i][w] = 0;
else if (wt[i - 1] <= w)
K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]],K[i - 1][w]);
else
K[i][w] = K[i - 1][w];
if(K[i][w]+(W-w)>ans||(K[i][w]+(W-w)==ans&&w<ans1))
{
ans=K[i][w]+(W-w);
ans1=w;
}
}
cout<<ans1<<" ";
return ans;
}
int main()
{
int t;
cin>>t;
while(t--)
{
int n,W;
cin>>n>>W;
int val[n],wt[n];
for (int i = 0; i < n; i++)
cin>>val[i]>>wt[i];
printf("%d \n", knapSack(W, wt, val, n));
}
return 0;
}
