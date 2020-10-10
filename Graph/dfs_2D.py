# size of 2-D grid
n, m = map(int, input().split())

visited = [[0 for i in range(0, n + 1)] for i in range(0, m + 1)]

# a function to tell if a particular cell coordinate is correct or not


def isValid(node_x, node_y):

    if 1 <= node_x <= n and 1 <= node_y <= m:
        if visited[node_x][node_y] == 0:
            return True
    else:
        return False


# dfs traversal starting from root = (node_x, node_y)


def dfs_2D(node_x, node_y):

    print(str(node_x) + " " + str(node_y) + "-->", end="")
    visited[node_x][node_y] = 1

    # if only cells with common edges are considered as a valid connection i.e as cell [1,2] share
    # a common edge with cell [1,3] this is an edge in terms of graph, for each cell we have maximum 4
    # different possibilities for connection to any other cell

    dx = [-1, 0, 1, 0]
    dy = [0, 1, 0, -1]
    # up,right,down,left

    for i in range(len(dx)):
        if isValid(node_x + dx[i], node_y + dy[i]):
            dfs_2D(node_x + dx[i], node_y + dy[i])


# creating a n+1*n+1 matrix a[1][1] denotes the first cell, a[1][2] denotes the second cell and so on
a = [[0 for i in range(0, n + 1)] for i in range(0, m + 1)]

# taking complete row as input
for i in range(1, n + 1):
    a[i][1:] = [int(i) for i in input().split()]

print()
dfs_2D(1, 1)
print()

