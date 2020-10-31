"""
Code contributed by Github user: sharmasourab93
Python: Breadth First Search
"""


class Graph:
    
    def __init__(self, vertices):
        self.V = vertices
        self.adj_list = {i: list() for i in range(self.V)}
    
    def add_edge(self, destination, source):
        
        self.adj_list[destination].append(source)
    
    def print_graph(self):
        
        for i in range(len(self.adj_list)):
            print("From Node {0}".format(i), end="->")
            
            for j in self.adj_list[i]:
                print(j, end=" ")
            
            print()
            
    def depth_first_search_util(self, visited, index):
        
        visited[index] = True
        print(index, end=" ")
        
        for j in range(len(self.adj_list)):
            if not visited[j]:
                self.depth_first_search_util(visited, j)
    
    def depth_first_search(self, index):
        
        visited_nodes = [False] * self.V
        self.depth_first_search_util(visited_nodes, index)


if __name__ == '__main__':
    g = Graph(5)

    g.add_edge(0, 1)
    g.add_edge(0, 2)
    g.add_edge(1, 3)
    g.add_edge(4, 1)
    g.add_edge(1, 4)
    g.add_edge(2, 3)
    g.add_edge(3, 4)
    g.add_edge(4, 0)
    g.print_graph()
    
    g.depth_first_search(3)
