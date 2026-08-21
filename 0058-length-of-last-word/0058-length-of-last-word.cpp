#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<char>c;
        reverse(s.begin(),s.end());
        for (int i =0; i <s.size(); i++) {
           
            if (s[i]== ' ' && c.size()==0) {
                continue;
                
            } else if (s[i] == ' ') {
                break;
            } else {
                c.push_back(s[i]);
            }
        }
        return c.size();
    }
};