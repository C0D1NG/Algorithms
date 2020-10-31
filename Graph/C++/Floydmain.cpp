#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	// input amount of nodes
	int amountOfNodes = 0;
	cin >> amountOfNodes;
	
	// creating an array with corresponding size
	int a[amountOfNodes][amountOfNodes];
	
	// input of distances between nodes
	for (int i = 1; i <= amountOfNodes; i++){
		for (int j = 1; j <= amountOfNodes; j++){
			cin >> a[i][j];
		}
	}
	
	// Floyd Warshall algorithm
	for (int k = 1; k <= amountOfNodes; k++){
		for (int i = 1; i <= amountOfNodes; i++){
			for (int j = 1; j <= amountOfNodes; j++){
				if (a[i][j] > a[i][k] + a[k][j]){
					a[i][j] = a[i][k] + a[k][j];
				}
			}
		}
	}
	
	//output of results
	for (int i = 1; i <= amountOfNodes; i++){
		for (int j = 1; j < amountOfNodes; j++){
			cout << a[i][j] << " ";
		}
		cout << a[i][amountOfNodes] << endl;
	}
	
	return 0;
}
