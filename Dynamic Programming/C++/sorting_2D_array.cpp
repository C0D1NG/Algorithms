
// C++ code to demonstrate sorting of 2D vector on basis of no. of columns in ascending order 
#include<iostream> 
#include<vector> // for 2D vector 
#include<algorithm> // for sort() 
using namespace std; 
  
// Driver code
bool sizecom(const vector<int>& v1, const vector<int>& v2) 
{ 
    return v1.size() < v2.size(); 
} 
  
int main() 
{ 
    // Initializing 2D vector "vect" with 
    // values 
    vector< vector<int> > vect{{1, 2}, 
                               {3, 4, 5}, 
                               {6}}; 
  
    // Displaying the 2D vector before sorting 
    cout << "The Matrix before sorting is:\n"; 
    for (int i=0; i<vect.size(); i++) 
    { 
        //loop till the size of particular 
        //row 
        for (int j=0; j<vect[i].size() ;j++) 
            cout << vect[i][j] << " "; 
        cout << endl; 
    } 
  
    //Use of "sort()" for sorting on 
    //basis of no. of columns in 
    //ascending order. 
    sort(vect.begin(), vect.end(), sizecom); 
  
    // Displaying the 2D vector after sorting 
    cout << "The Matrix after sorting is:\n"; 
    for (int i=0; i<vect.size(); i++) 
    { 
        //loop till the size of particular 
        //row 
        for (int j=0; j<vect[i].size() ;j++) 
            cout << vect[i][j] << " "; 
        cout << endl; 
    } 
  
    return 0; 
  
} 