import java.util.*;

public class Main {
    private static ArrayList<ArrayList<Integer>> graph;
    private static int V;
    private static int E;
    private static ArrayList<Integer> path;
    private static ArrayList<Boolean> visited;

    private static void DFS(int src) {
        Stack<Integer> s = new Stack<>();
        path = new ArrayList<>();
        visited = new ArrayList<>();
        for (int i = 0; i < V; i++) {
            visited.add(false);
            path.add(-1);
        }
        visited.set(src, true);
        s.add(src);
        // to be continued
        while (!s.isEmpty()) {
            int u = s.pop();
            for (int i = 0; i < graph.get(u).size(); i++) {
                int v = graph.get(u).get(i);
                if (!visited.get(v)) {
                    visited.set(v, true);
                    path.set(v, u);
                    s.add(v);
                }
            }
        }
    }

    private static void printPath(int s, int f) {
        if (s == f) {
            System.out.print(s);
            return;
        }
        if (path.get(f) == -1) {
            System.out.print("No path");
            return;
        }
        // to be continued
        ArrayList<Integer> b = new ArrayList<>();
        while (true) {
            b.add(f);
            f = path.get(f);
            if (s == f) {
                b.add(f);
                break;
            }
        }
        for (int i = b.size() - 1; i >= 0; i--) {
            System.out.printf("%d ", b.get(i));
        }
    }

    private static void printPathRecursion(int s, int f) {
        if (s == f)
            System.out.printf("%d ", f);
        else {
            if (path.get(f) == -1)
                System.out.println("No path");
            else {
                printPathRecursion(s, path.get(f));
                System.out.printf("%d ", f);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        V = sc.nextInt();
        E = sc.nextInt();
        graph = new ArrayList<>(V);
        for (int i = 0; i < V; i++)
            graph.add(new ArrayList<>());
        for (int i = 0; i < E; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            graph.get(u).add(v);
            graph.get(v).add(u);
        }
        int s = 0, f = 5;
        DFS(s);
        printPath(s, f);
    }
}