package firstSearch;

import java.util.*;

class graph
{
	int n;
	int e;
	node head[];
	int adjmat[][] = {{0}};
	boolean visited[] ;
	
	
	graph(int n,int e)
	{
		this.n=n;
		this.e=e;
		 visited = new boolean[n];
		for(int i=0;i<n;i++)
			visited[i]= false;
	}
	
	void createList(int a,int b)
	{
	//	Scanner sc = new Scanner(System.in);
		
		

		//int a,b;
		node ptr;
		if(head[a-1]==null)
		{
			head[a-1]=new node(b);
			
		}
		else
		{
			node temp=new node(b);
			ptr = head[a-1];
			while(ptr.next!=null)
			{
				ptr=ptr.next;
			}
			ptr.next=temp;
		}
		
		if(head[b-1]==null)
		{
			head[b-1]=new node(a);
			
		}
		else
		{
			node temp=new node(a);
			ptr = head[b-1];
			while(ptr.next!=null)
			{
				ptr=ptr.next;
			}
			ptr.next=temp;
		}
		
	
		
		
		
	}
	
	void displayList()
	{
		node ptr;
		System.out.println("ADJACENT MATRIX:");
		for(int i=0;i<n;i++)
		{
			ptr= head[i];
			while(ptr!=null)
			{
				System.out.print(ptr.h + " ");
				ptr=ptr.next;
			}
			System.out.println();
		}
	}
	
	void createMat(int a,int b)
	{
		//Scanner sc = new Scanner(System.in);
		
		
		adjmat[a-1][b-1] = 1;
		adjmat[b-1][a-1] = 1;
			
	
		
		
	}
	void dispMat()
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.print(adjmat[i][j]+" ");
			}
			System.out.println();
		}
	}
	void DFS()
	{
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of starting vertex");
		int s = sc.nextInt();
		RecDFS(s);
	}
	void RecDFS(int s)
	{
		int temp;
		visited[s-1]=true;
		node ptr=head[s-1];
		System.out.print(s+" ");
		while(ptr!=null)
		{
			temp=ptr.h;
			//System.out.println(visited[temp-1]);
			if(!visited[temp-1])
			{
				RecDFS(temp);
			}
			else
				ptr=ptr.next;
		}
		return;
		
		/*Scanner sc = new Scanner(System.in);
		
		int flag=1;
		Stack<node> st = new Stack<>();
		st.push(head[s-1]);
		//head[s-1].visited=true;
		System.out.print(s +" ");
		while(!st.isEmpty())
		{
			node ptr= head[st.peek().h-1];
			
			while(ptr!=null)
			{
				if(!ptr.visited)
				{
					//head[ptr.h-1].visited=true;
					ptr.visited=true;
					flag=0;
					break;
				}
				ptr=ptr.next;
			}
			if(flag==1)
			{
				st.pop();
			}
			System.out.print(ptr.h +" ");
			//st.push(ptr);
			
		}*/
	}
	
	void BFS()   //matrix
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of starting vertex");
		int s = sc.nextInt();
		boolean visited[] = new boolean[n];
		for(int i=0;i<n;i++)
			visited[i]= false;
		Queue<Integer> q = new LinkedList<Integer>();
		q.add(s);
		int p;
		System.out.print(s+" ");
		visited[s-1]=true;
		while(!q.isEmpty())
		{
			p=q.remove();
		
			for(int i=0;i<n;i++)
			{
				if(adjmat[p-1][i]==1 && !visited[i])
				{
					System.out.print((i+1)+" ");
					q.add(i+1);
					visited[i]=true;
				}
			}
		}
		
		
	}
	
	void nrdfs()
	{
		Stack<Integer> s = new Stack<Integer>();
		Scanner sc = new Scanner(System.in);
		System.out.println("enter starting vertx");
		int s1 = sc.nextInt();
		boolean visited[] = new boolean[n];
		for(int i=0;i<n;i++)
			visited[i]= false;
		s.push(s1);
		
		while(!s.isEmpty())
		{
			int q = s.pop();
			System.out.print(q+" ");
			visited[q-1]=true;
			node ptr = head[q-1];
			while(ptr!=null)
			{
				if(!visited[ptr.h-1])
				{
					visited[ptr.h-1]=true;
					s.push(ptr.h);
				}
				else
					ptr=ptr.next;
			}
			
		}
		
		
	}
	
	void rdfs(int s)
	{
		visited[s-1]=true;
		node ptr=head[s-1];
		System.out.print(s+" ");
		
		while(ptr!=null)
		{
			if(visited[ptr.h-1]!=true)
			{
				rdfs(ptr.h);
			}
			else
				ptr=ptr.next;
		}
	}
	
	void bfs()
	{
		boolean visited[] = new boolean[n];
		for(int i=0;i<n;i++)
			visited[i]= false;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter sv");
		int s =sc.nextInt();
		Queue<Integer> q = new LinkedList<Integer>();
		q.add(s);
		System.out.print(s+" ");
		visited[s-1]=true;
		while(!q.isEmpty())
		{
			int k = q.remove();
			
			for(int i=0;i<n;i++)
			{
				if(adjmat[k-1][i]==1 && !visited[i])
				{
					System.out.print((i+1)+" ");
					q.add(i+1);
					visited[i]=true;
				}
			}
		}
	}
	
	
}

class node
{
	int h;
	node next ;
	boolean visited=false;
	node(int h)
	{
		this.h=h;
	
	}
}
public class fs {

	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		
		
		graph g =null;
		int choice=0;
		
		do {
			System.out.println();
			System.out.println("1.Create a graph");
			System.out.println("2.Display Adjacent Matrix");
			System.out.println("3.Display Adjacency List");
			System.out.println("4.BFS");
			System.out.println("5.DFS");
			

			choice = sc.nextInt();
			switch (choice) {
			case 1:

				System.out.println("Enter number of homes.");
				int n = sc.nextInt();
				System.out.println("Enter number of edges");
				int e =sc.nextInt();
				g= new graph(n,e);
				g.adjmat = new int[n][n];
				g.head = new node[g.n];
				int a,b;
				for(int i=0;i<e;i++)
				{
					System.out.println("Enter edge "+(i+1));
					a = sc.nextInt();
					b = sc.nextInt();
					g.createList(a, b);
					g.createMat(a, b);
					
				}
				break;
			case 2:if(g!=null)
				{
				g.dispMat();
				}
				else
				{
					System.out.println("Graph not created.First create a graph");
				}
			
			break;
			case 3:if(g!=null)
				{
				g.displayList();
				}
				else
				{
					System.out.println("Graph not created.First create a graph");
				}
			break;
			case 4:
				if(g!=null)
				{
				g.bfs();
			
				}
				else
				{
					System.out.println("Graph not created.First create a graph");
				}
				break;
			case 5:if(g!=null)
				{
				g.nrdfs();
				}
				else
				{
					System.out.println("Graph not created.First create a graph");
				}
			}
		} while (choice >= 1 && choice <= 5);
		
		
		
		
		
		}
}