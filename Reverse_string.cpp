#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void ReverseString(vector<char>& s){
        int n = s.size();
        int i = 0;
        int j = n-1;

        while(i < j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter character number" << endl;
    cin >> n;

    vector<char> s;

    for(int i = 0 ; i < n ; i++){
        char ch;
        cin >> ch;
        s.push_back(ch);
    }

    cout << "After reverse" << endl;

    obj.ReverseString(s);

    for(char str : s){
        cout << str;
    }

    return 0;
}