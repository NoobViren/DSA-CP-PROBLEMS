def solve(l,k,s):
    if k == 0:
        return s
    return max(solve(l[2:],k-1,s-l[0]-l[1]),solve(l[:-1],k-1,s-l[len(l)-1]))
l = [2 ,5 ,1 ,10 ,6]
l.sort()
k =2
s = sum(l)
print(solve(l,k,s))
