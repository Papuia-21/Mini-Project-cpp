#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> Rotate(vector<int> &arr){
        vector<int> result(arr.size());
        int n = arr.size();
        result[0] = arr[n-1];

        for( int i = n-1 ; i > 0 ; i-- ){
            result[i] = arr[i-1];
        }
        return result;
    }
};

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    vector<int> arr(n);

    for ( int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    } 

    Solution obj;
    vector<int> ans = obj.Rotate(arr);

    for ( int x : ans ){
        cout << x << ' ';
    }

    return 0; 
}