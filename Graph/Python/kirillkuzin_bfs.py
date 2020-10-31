from collections import deque


def checking_function(item):
    if item == 'elizabet':
        return True
    return False


def bfs(graph, root):
    dq = deque()
    dq += graph[root]
    searched = []
    while dq:
        next_item = dq.popleft()
        if next_item not in searched:
            if checking_function(next_item):
                return True
            dq += graph[next_item]
            searched.append(next_item)
    return False


if __name__ == '__main__':
    graph = {'alice': ['bob', 'cat', 'mike'],
             'bob': ['cat', 'jhon', 'helen'],
             'cat': ['jhon'],
             'mike': [],
             'jhon': [],
             'helen': ['elizabet'],
             'elizabet': []}
    print(bfs(graph, 'alice'))
