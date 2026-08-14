class Solution {
public:
    bool isPalindrome(int x) {
         long long temp = 0;
        int orginal=x;
            while (x> 0) {
                int rem = x % 10;
                temp = (temp * 10) + rem;
                x = x / 10;
            }
            if (temp == orginal) {
                    return true;
                } else {return false;}      
                 
    }
};