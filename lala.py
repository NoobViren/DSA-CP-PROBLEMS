a = int(input())
for _ in range(a):
 n = input()
 numbers = [int(x) for x in input().split]
 pfs = [0]*n
 pfs[0] = numbers[0]
 sfs = [0]*n
 sfs[n-1] = numbers[n-1]
 for i in range(1,n):
  pfs[i] = pfs[i-1] + numbers[i]
 for j in range(n-2,-1,-1):
  sfs[j] = sfs[j+1] + numbers[j]
 dict= {}
 for k in range(n-1):
  dict[pfs[k]] = k
 for x in range(n,1):
  if sfs[x] in dict and x>sfs[x]:
   ans = max(ans,sfs[x]+n-x+1)
 print(ans)


