# DFS Function
def dfs(visited, graph, node):
    # first checks if the current node is unvisited
    if node not in visited:
        print (node)
        # appended in the visited set
        visited.add(node)
        for neighbour in graph[node]:
            # each neighbor of the current node, 
            # the dfs function is called
            dfs(visited, graph, neighbour)

# Set to keep track of visited nodes.
visited = set()

# Using a Python dictionary to act as an adjacency list
graph = {
    'A' : ['B','C'],
    'B' : ['D', 'E'],
    'C' : ['F'],
    'D' : [],
    'E' : ['F'],
    'F' : []
}

# Driver Code
dfs(visited, graph, 'A')