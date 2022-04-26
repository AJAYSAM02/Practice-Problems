#User function Template for python3

'''
class Pair(object):
    def __init__(self, a, b):
        self.a = a
        self.b = b
'''

def maxChainLen(Parr, n):
    sorted_parr = sorted(Parr, key=lambda x: x.b)
    _max = 0
    for i in range(n):
        cnt = 1
        curr_b = sorted_parr[i].b
        for j in range(i+1, n):
            if sorted_parr[j].a > curr_b:
                curr_b = sorted_parr[j].b
                cnt += 1
        _max = max(_max, cnt)
    return _max
#{ 
#  Driver Code Starts
#Initial Template for Python 3

class Pair(object):
    def __init__(self, a, b):
        self.a = a
        self.b = b

if __name__ =='__main__':
    tcs = int(input())

    for _ in range(tcs):
        n=int(input())

        arr=[int(x) for x in input().split()]

        Parr=[]

        i=0
        while n*2>i:

            Parr.append(Pair(arr[i],arr[i+1]))

            i+=2

        #print(Parr,len(Parr))

        print(maxChainLen(Parr, n))
# } Driver Code Ends
