class Solution {
public:
    int mySqrt(int x) {
        long long ans=0;
        if(x>1 || x==1){
              for(long long i=1;i*i<=x;i++){
              
                    ans=i;}
                   
              return ans;
           
        }
        else{
        return 0;
        }
    }
};