#User function Template for python3


class Solution:
    def MissingNumber(self,array,n):
        # code here
        sum_of_naturals = 0
        sum_of_arr = 0
        for i in range(1,n+1):
            sum_of_naturals += i
        for i in range(n-1):
            sum_of_arr += array[i]
        return (sum_of_naturals - sum_of_arr)

#{ 
#  Driver Code Starts
#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    s=Solution().MissingNumber(a,n)
    print(s)
# } Driver Code Ends
