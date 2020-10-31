import java.util.*;
import java.io.*;
import java.lang.*;

class dfs_bfs{
	public int[] dfs(ArrayList<LinkedList<list_vertices>> graph,int src_vertex)
	{
		int[] pie = new int[graph.size()];
		boolean[] visited = new boolean[graph.size()];     // 0-red,1-blue,2-green
		//visited[src_vertex]=0;
		Stack<Integer> pq = new Stack<Integer>();
		pq.push(src_vertex);
		pie[src_vertex] = src_vertex;
		//visited[src_vertex] =true;
        System.out.println("DFS traversal is : ");
		while(true)
		{
			while(!pq.empty())
			{
				int tos = pq.pop();
				if(visited[tos]==false)
				{
					visited[tos] = true;
					System.out.print(tos+"\t");
				}
				LinkedList<list_vertices> adjacent_vertex = graph.get(tos);
				
		 		for(int i=0;i<adjacent_vertex.size();i++)
		 		{
		 			list_vertices vertex = adjacent_vertex.get(i);
		 			int temp = vertex.name_of_vertices;
		 			if(visited[temp]==false)
		 			{
		 				pq.push(temp);
		 				pie[temp] = tos;
		 				//visited[temp] = 1;
		 				//pie[temp] = tos;
		 			}
		 		}
		 	}
		 	if(check_all_visited(visited)==-1)
		 		break;
		 	else
		 	{
		 		pq.push(check_all_visited(visited));
		 	}
	 	}
	 	return pie;
	 }
	 public void print_dfs_tree(int[] pie)
	 {
	 	for(int i=0;i<pie.length;i++)
	 		System.out.print(" parent of the node " +i+ " is: "+pie[i]);
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
	int[] pie = d.dfs(e.matrix_to_list(input,row),src_vertex);
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
