class Solution {
public:
    bool isUgly(int n) {
        //BF
        // prime numbers till n 
        //them all prime modulos till n
        if(n <= 0){
            return false;
        }
        //TLE
        // vector<int> prime(n+1,1);
        // for(int i = 2; i <= n;i++){
        //     if(prime[i]){
                
        //         for(int k = i*2;k <= n;k += i){
        //             prime[k] = 0;
        //         }
        //     }
        // }

        // for(int i = 7 ; i <= n ; i++){
        //     if(prime[i]){
        //         if(n%i == 0){

        //             return false;
        //         }
        //     }
        // }


        //optimized in O(logn) ==> O(log2n + log3n + log5n) where 2 3 5 are bases of log
        

        while(n%2 == 0){
            n = n/2;
        }
        while(n%3 == 0){
            n = n/3;
        }
        while(n%5 == 0){
            n = n/5;
        }
        if(n == 1)return true;
        return false;
    }
};