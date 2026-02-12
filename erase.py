def solve(s,d):
    if(len(s)==0): return 0
    if s in d :
        return 0
    d.add(s)
    a = s[1:]
    b = s[:-1]
    return 1+ solve(a,d) + solve(b,d)
s = "abcdefghijklmnopqrst"
d = set()
print(solve(s,d))