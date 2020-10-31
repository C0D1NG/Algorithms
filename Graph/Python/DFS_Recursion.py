from queue import Queue

MAX = 100
V = None
E = None
visited = [False for i in range(MAX)]
path = [0 for i in range(MAX)]
graph = [[] for i in range(MAX)]

def DFSRecursion(s):
    visited[s] = True
    for v in graph[s]:
        if not visited[v]:
            path[v] = s
            DFSRecursion(v)


def printPath(s, f):
    b = []
    if f == s:
        print(s)
        return

    if path[f] == -1:
        print("No path")
        return

    while True:
        b.append(f)
        f = path[f]
        if f == s:
            b.append(s)
            break
    for i in range(len(b)-1,-1,-1):
        print(b[i], end=' ')


def printPathRecursion(s, f):
    if s == f:
        print(f, end=' ')
    else:
        if path[f] == -1:
            print("No path")
        else:
            printPathRecursion(s, path[f])
            print(f, end=' ')


if __name__ == '__main__':
    V, E = map(int, input().split())
    for i in range(E):
        u, v = map(int, input().split())
        graph[u].append(v)
        graph[v].append(u)
    s = 0
    f = 5
    for i in range(V):
        visited[i] = False
        path[i] = -1
    DFSRecursion(s)
    printPath(s, f)
