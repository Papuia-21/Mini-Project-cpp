#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
    public:
    void rotate(vector<vector<int>>& matrix){
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i = 0 ; i < row ; i++){
            for(int j = i+1 ; j < col ; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i = 0 ; i < row ; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

int main()
{
    Solution obj;

    vector<vector<int>> matrix(3,vector<int>(3));

    cout << "enter 9 elements" << endl;
    
    for(int i = 0 ; i < 3 ; i++ ){
        for(int j = 0 ; j < 3 ; j++){
            cin >> matrix[i][j];
        }
    }

    obj.rotate(matrix);

    cout << "Rotate matrix " << endl;

    for(int i = 0 ; i < 3 ; i++ ){
        for(int j = 0 ; j < 3 ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}