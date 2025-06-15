/*
name :auni alyaa natasya binti mohmad saluddin
id: 22012306
 */
 
#include <iostream>
#include <vector>
using namespace std;

void booleanMatrix(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    // Arrays to keep track of rows and columns to be updated
    
    vector<bool> rowMarker(rows, false);   // if rows=3 ,rowMarker = [false, false, false]
    vector<bool> colMarker(cols, false);   // if clos =4 ,colMarker = [false, false, false, false]


    // Mark the rows and columns that need to be updated
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 1) {
                rowMarker[i] = true;
                colMarker[j] = true;
            }
        }
    }

    // Update the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (rowMarker[i] || colMarker[j]) { //if row/col is tru the , element =1
                mat[i][j] = 1;
            }
        }
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0}
    };
  
    booleanMatrix(mat);
    for (const vector<int>& row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}