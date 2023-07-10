class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)return 1;
        int b = abs(n);
        double res= 1;
        //here b > 1 not b != 0 because to reduce 1 iteration which will not give TLE for n = -2^31
        //==> while loop will iterate for maximum 2^31 - 1 times.
        while(b > 1){
            if(b&1){
                res = res * x;
            }
            x = x*x;
            b = b>>1;
        }
        if(n < 0){
            res = 1/(res*x);
            return res;
        }
        return res*x;
    }
};