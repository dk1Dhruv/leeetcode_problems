class Solution {
public:
    int divide( int dividend, int divisor) {
        long long ans = 0;
        long long digit = 0;
        long long a = dividend;
        long long b = divisor;
        bool negative = false;
        if (a< 0) { a =(-a);
        negative = !negative;
        } 
        if(b<0) { b= (-b);
                negative = !negative; 
        } 
        // for (long long i = 1; i <=a; i++) {
        //     digit += b;
        //     if (digit <= a) {
        //         ans = i;
        //     }
        //     else{ break;}
        // }

             while (a >= b) {

            long long temp = b;
            long long count = 1;

            // Keep adding divisor, but double each time
            while (a >= temp + temp) {
                temp = temp + temp;
                count = count + count;
            }

            a = a - temp;
            ans = ans + count;
        }
        
   if (negative)
            ans = -ans; 

    if (ans > INT_MAX)
            return INT_MAX;

if (ans < INT_MIN)
            return INT_MIN;

        return ans;
    
    }
};