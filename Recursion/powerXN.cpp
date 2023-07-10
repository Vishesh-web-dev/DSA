class Solution {
public:
    double myAns(double x,long int n){
        //reduce one iteration for 2^-31 use below
        //instead of n == 0 return 1
        if(n == 1)return x;

        if(n&1){
            return x*myPow(x*x,n/2);
        }else{
            return myPow(x*x,n/2);
        }
    }
    double myPow(double x, int n) {
        // if(n == 0)return 1;
        // int b = abs(n);
        // double res= 1;
        // while(b > 1){
        //     if(b&1){
        //         res = res * x;
        //     }
        //     x = x*x;
        //     b = b>>1;
        // }
        // if(n < 0){
        //     res = 1/(res*x);
        //     return res;
        // }
        // return res*x;


        // using recursion 
        if(n == 0)return 1;
        
        double ans = myAns(x,abs(n));
        if(n < 0){
            return 1/ans;
        }else{
            return ans;
        }
    }
};