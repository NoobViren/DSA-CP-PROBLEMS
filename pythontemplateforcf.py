import sys
from collections import *
from itertools import *
from math import *
input = sys.stdin.readline

def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    # your logic
    print(sum(arr))

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()

# -------------------- Competitive Python Template --------------------
# Run with: pypy3 file.py < input.txt

import sys
import math
from collections import *
from itertools import *
from bisect import *
from heapq import *
from functools import *
from typing import *

# Fast I/O
input = sys.stdin.readline
def inp(): return input().strip()
def inlt(): return list(map(int, input().split()))
def insr(): return list(inp())
def invr(): return map(int, input().split())

# Common constants
INF = float('inf')
MOD = 10**9 + 7
YES, NO = "YES", "NO"

# Debug helper (prints to stderr, doesn’t affect output)
def dbg(*args):
    print(*args, file=sys.stderr)

# -------------------- Core Solve Function --------------------
def solve():
    n = int(inp())
    arr = inlt()

    # Example logic
    total = sum(arr)
    print(total)

# -------------------- Main --------------------
if __name__ == "__main__":
    sys.setrecursionlimit(10**6)
    t = 1
    # Uncomment next line for multiple test cases
    # t = int(inp())
    for _ in range(t):
        solve()
# ---------------------------------------------------------------------
