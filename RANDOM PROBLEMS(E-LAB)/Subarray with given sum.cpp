// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
   public:
   vector<int> subarraySum(int arr[], int n, long long s)
   {
       // Your code here
       int sum = 0, left = 0;
       
       for(int i = 0; i < n; i++) {
           sum += arr[i];
           while(sum > s) sum -= arr[left++];
           if(sum == s) return vector<int> {left + 1, i + 1};
       }
       return vector<int> {-1};                       
   }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
