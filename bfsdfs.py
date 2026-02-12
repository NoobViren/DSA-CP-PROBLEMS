#dfs
def dfs(graph ,node ,visited = None):
    if visited is None:
        visited = set()
    print(node)
    visited.add(node)
    for at in graph[node]:
        if at not in visited:
            dfs(graph,at,visited)
graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': [],
    'D': [],
    'E': []
}

dfs(graph, 'A')

# bfs
from collections import deque

def bfs(graph,start):
    visited = set()

    queue = deque([start])
    while queue:
        node = queue.popleft()
        if node not in visited:
            print(node)
            visited.add(node)
        
        for at in graph[node]:
            if at not in visited:
                queue.append(at)
    
#bfs on a matrix
def bfs(matrix):
    rows,cols = len(matrix),len(matrix[0])
    visited = [(False)*cols for _ in range(rows)]
    q = deque()
    q.append((0,0))
    directions = [(1,0),(-1,0),(0,1),(0,-1)]
    while q:
        x,y = q.popleft()
        for dx,dy in directions:
            nx,ny = x+dx,y+dy
            if  0<=nx<rows and 0<=ny<cols and (nx,ny) not in visited:
                q.append((nx,ny))
