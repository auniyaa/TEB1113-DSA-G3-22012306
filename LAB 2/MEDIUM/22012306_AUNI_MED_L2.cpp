/**
 name: Auni Alyaa Natasya Binti Mohmad Saluddin
 id: 22012308
**/

// C++ program to find median of a matrix
// Using Extra Space
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int median(vector<vector<int>> &mat) {
  
    // want to turn to 1d vect
    vector<int> arr;    //store
    for (int i = 0; i < mat.size(); i++) {  
        for (int j = 0; j < mat[0].size(); j++) {
            arr.push_back(mat[i][j]);  // took the element from mat to arr
        }
    }

    // Sort 
    sort(arr.begin(), arr.end());

    // Find  median 
    int mid = arr.size() / 2;
    return arr[mid];  // return the element of the index
}

int main() {
    vector<vector<int>> matrix = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    cout << median(matrix) << endl;

    return 0;
}