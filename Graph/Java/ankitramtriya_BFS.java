import java.util.*;
import java.io.*;
import java.lang.*;

class dfs_bfs{
	
	 public void print_dfs_tree(int[] pie)
	 {
	 	for(int i=0;i<pie.length;i++)
	 		System.out.print(" parent of the node " +i+ " is: "+pie[i]);
	 }
	public void bfs(ArrayList<LinkedList<list_vertices>> graph,int src_vertex)
	{
	 	boolean[] visited = new boolean[graph.size()];
	 	Queue<Integer> que = new LinkedList<Integer>();
	 	que.add(src_vertex);
	 	while(true)
	 	{
		 	while(que.peek()!=null)
		 	{
		 		int head = que.poll();
		 		if(visited[head]==false)
		 		{
		 			visited[head] = true;
		 			System.out.print(head+"\t");
		 		}
		 		LinkedList<list_vertices> adjacent_vertex = graph.get(head);
		 		for (int i=0;i<adjacent_vertex.size();i++) 
		 		{
		 			list_vertices vertex = adjacent_vertex.get(i);
		 			int temp = vertex.name_of_vertices;
		 			if(visited[temp]==false)
		 			{
		 				que.add(temp);
		 			}	
		 		}
		 	}
		 	if(check_all_visited(visited)==-1)
		 		break;
		 	else
		 	{
		 		que.add(check_all_visited(visited));
		 	}
		}
	}
 private int check_all_visited(boolean[] visited)
 {
 	for(int i=0;i<visited.length;i++)
 	{
 		if(visited[i]==false)
 			return i;
 	}
 	return -1;
 }
	
}
class dfs_bfs_Main{
	public static void main(String[] args) throws IOException {

	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	System.out.println("Enter the number of vertices");
	int row = Integer.parseInt(br.readLine());
	int[][] input = new int[row][];
	System.out.println("Enter matrix");
	for(int i =0 ;i<row;i++)
		input[i] = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
	System.out.println("Enter the source vertex");
	int src_vertex = Integer.parseInt(br.readLine());

	edge_represent e = new edge_represent();
	dfs_bfs d = new dfs_bfs();
	d.bfs(e.matrix_to_list(input,row),src_vertex);
	System.out.println();
	// d.print_dfs_tree(pie);
	//d.bfs(e.matrix_to_list(input,row),src_vertex);

	}
}
class list_vertices{
	int name_of_vertices;
	int weight_of_edge;
	int priority = Integer.MAX_VALUE;
}
class edge{
	int vertex1;
	int vertex2;
	int weight_of_edge;
}
class edge_represent{
	public ArrayList<LinkedList<list_vertices>> matrix_to_list(int[][] matrix,int no_of_vertices)
	{
		ArrayList<LinkedList<list_vertices>> result = new ArrayList<LinkedList<list_vertices>>();
		for(int i =0;i<no_of_vertices;i++)
		{
			LinkedList<list_vertices> temp = new LinkedList<list_vertices>();
			for (int j=0;j<no_of_vertices;j++) 
			{
					if(matrix[i][j]!=0)
					{
						list_vertices temp_vertices = new list_vertices();
						temp_vertices.name_of_vertices = j;
						temp_vertices.weight_of_edge = matrix[i][j];
						temp.add(temp_vertices);
					}
			}
			result.add(temp);
		}
		return result;
	}
}
