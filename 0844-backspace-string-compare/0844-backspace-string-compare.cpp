class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        stack<char> tt;
        for (char c : s) {
            if (c == '#') {
                if (!ss.empty()) {
                    ss.pop();
                }
            } else {
                ss.push(c);
            }
        }
    
      for (char c : t) {
        if (c == '#') {
            if (!tt.empty()) {
                tt.pop();
            }
        } 
        else {
            tt.push(c);
            
          }  }
    
    return ss == tt;
}
};