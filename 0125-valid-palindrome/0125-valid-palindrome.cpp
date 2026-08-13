#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>ans;
     
        for(int i=0;i<s.size();i++){
             s[i]=tolower(s[i]);
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
               ans.push_back(s[i]);
            }
        }
        vector<char> v = ans;
             reverse(v.begin(), v.end());
        if(ans==v){
            return true;
        }
        return false;
    }
};