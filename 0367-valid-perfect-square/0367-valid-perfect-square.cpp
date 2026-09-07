class Solution {
public:
    bool isPerfectSquare(int n) {
            if (n == 1) {
            return true;
        }
         
    for(long long i=2;i*i<=n;i++){
        if(i*i==n){
            return true;
        }
    }
      return false;  
    }
};