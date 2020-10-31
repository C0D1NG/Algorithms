print("Enter size of the matrix:")
n, m = map(int, input().split())
visited = [[0 for i in range(m + 1)] for i in range(n + 1)]

# keepinf track of every node from the root node
dist = [[0 for i in range(m + 1)] for i in range(n + 1)]


def isValid(node_x, node_y):

    if 1 <= node_x <= n and 1 <= node_y <= m:
        if visited[node_x][node_y] == 0:
            return True
    else:
        return False


# level order traversal with respect to the root node
def bfs(root_x, root_y):
    visited[root_x][root_y] = 1
    dist[root_x][root_y] = 0
    q = []
    q.append([root_x, root_y])

    while len(q) > 0:
        x = q.pop(0)
        dx = [-1, 0, 1, 0]
        dy = [0, 1, 0, -1]
        # up,right,down,left

        for i in range(len(dx)):
            if isValid(x[0] + dx[i], x[1] + dy[i]):

                visited[x[0] + dx[i]][x[1] + dy[i]] = 1

                # distance of child node = distance of parent node + 1
                dist[x[0] + dx[i]][x[1] + dy[i]] = dist[x[0]][x[1]] + 1

                # append the new nodes to the queue
                q.append([x[0] + dx[i], x[1] + dy[i]])


print("Enter which node u want to act as thew root node")
x, y = map(int, input().split())
bfs(x, y)

for i in range(1, n + 1):
    print(" ".join(str(j) for j in dist[i][1:]))

