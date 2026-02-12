import sys
input = sys.stdin.readline

def minops(s):
    n = len(s)
    ch0 = [0]*26
    ch1 = [0]*26

    for i in range(0,n):
        if i%2==0:
            ch0[s[i]-97]+=1
        else:
            ch1[s[i]-97]+=1
        
    m1 = max(ch0)
    m2 = max(ch1)
    half = n//2
    return half - m1 + half -m2

def solve():
    t = int(input())
    for _ in range(t):
        s = input().strip()
        n =len(s)
        m = n
        if n%2==0:
            return minops(s)
        else:
            for i in range(n):
                temp = s[:i] + s[i+1:]
                ans = minops(temp)
                m = min(m,1+ans)
        print(temp)

      
