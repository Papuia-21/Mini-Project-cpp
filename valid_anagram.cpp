#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    bool isAnagram(string s , string t){
        int n = s.size();
        int m = t.size();

        if(n != m) return false;

        vector<int>count(26,0);

        for(int i = 0 ; i < n ; i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int i = 0 ; i < 26 ; i++){
            if(count[i] != 0) { 
                return false;
            }
            return true;
        }
    }
};

int main()
{
    Solution obj;

    string s,t;
    cout << "Enter 1st string" << endl;
    cin >> s;

    cout << "Enter 2nd string" << endl;
    cin >> t;

    int flag = obj.isAnagram(s,t);

    if(flag == 1){
        cout << "Yes it is a valid anagram!" << endl;
    } else {
        cout << "Not anagram!" << endl;
    }

    return 0;
}