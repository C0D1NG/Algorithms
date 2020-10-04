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
                
    def breadth_first_search(self, vertex):
        """
        Breadth First Search
        1. Based on the Graph vertices,
            mark visited nodes to visit as False.
        2. Based on the vertex param, mark the visited node as true
        3. Create a Queue and add the vertex in the queue.
        4. While iterating over queue,
            i. Pop the top most element 'item' and print it
            ii. The Adjacency nodes for 'item' must be iterated over
            ii. If a node is visited[item] is not True, append them to the queue.
            
        5. The iteration happens until all the queued elements are iterated
            visited once.
        6. The printed nodes are the Breadth First Search of the Graph V.
        :param vertex: int
        """
        
        visited_nodes = [False] * self.V
        
        queue = list()
        queue.append(vertex)
        visited_nodes[vertex] = True
        
        while queue:
            
            item = queue.pop(0)
            print(item, end=" ")
            for i in self.adj_list[item]:
                if not visited_nodes[i]:
                    queue.append(i)
                    visited_nodes[i] = True
                    

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
    
    g.breadth_first_search(3)