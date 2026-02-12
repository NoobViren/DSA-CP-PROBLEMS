def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    # Memoization dictionary
    memo = {}
    
    def dp(l, r):
        if l > r:
            return 0
        
        if (l, r) in memo:
            return memo[(l, r)]
        
        # Option 1: Don't remove anything, try splitting the range
        result = 0
        for k in range(l, r):
            result = max(result, dp(l, k) + dp(k + 1, r))
        
        # Option 2: Try to find matching colors to remove a segment
        for i in range(l, r + 1):
            for j in range(i + 1, r + 1):
                if a[i] == a[j]:
                    # Remove segment from i to j
                    removed = j - i + 1
                    # Recursively solve for the remaining parts
                    remaining = dp(l, i - 1) + dp(j + 1, r)
                    result = max(result, removed + remaining)
        
        memo[(l, r)] = result
        return result
    
    return dp(0, n - 1)

t = int(input())
for _ in range(t):
    print(solve())