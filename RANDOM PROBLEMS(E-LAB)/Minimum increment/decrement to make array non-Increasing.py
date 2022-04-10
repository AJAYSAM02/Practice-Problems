#User function Template for python3

class Solution:
    def minOperations(self,a,n):
        m = max(a)
        dp = [[0] * (m+1) for _ in range(n)]
            
        for j in range(m+1):
            dp[0][j] = abs(a[0]-j)
            
        for i in range(1, n):
            for j in range(m+1):
                minv = min(dp[i-1][j:]) # the previous element must be >= j
                dp[i][j] = minv + abs(a[i]-j)
        
        ans = float('inf')
        for j in range(m+1):
            ans = min(ans, dp[n-1][j])
            
        return ans


#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        n=int(input())
        a=[int(x) for x in input().strip().split()]
        obj=Solution()
        print(obj.minOperations(a,n))


# } Driver Code Ends
