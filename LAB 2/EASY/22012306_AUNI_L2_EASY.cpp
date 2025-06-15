/**
NAME : AUNI ALYAA NATASYA BINTI MOHMAD SALUDDIN
ID : 22012306
**/

#include <iostream>
#include <vector>
using namespace std;

//for 2d matrix
void multMat(vector<vector<int>>& m1, vector<vector<int>>& m2,vector<vector<int>>& res){
    
    int r1 = m1.size(); 
    int c1 = m1[0].size();
    int r2 = m2.size();
    int c2 = m2[0].size();
    
    //num of collumn matrix 1 neeed to be same to row matrix 2 to multiple
    if(c1!= r2){
        cout<< "INVALID INPUT"<<endl;
        exit(EXIT_FAILURE);
        
    }
    
    res.resize(r1, vector <int>(c2,0));
    
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main()
{
    vector<vector<int>> m1 = { {1, 1}, {2, 2} };
    vector<vector<int>> m2 = { {1, 1}, {2, 2} };
    vector<vector<int>> res;

    multMat(m1, m2, res);

    cout << "Multiplication of given two matrices is:\n";
    for (const auto& row : res) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }

    return 0;
}