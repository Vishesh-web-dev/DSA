class Solution {
public:
    int countPrimes(int n) {
        // //bf
        // int flag = 0;
        // int count = 0;
        // for(int i = 2; i< n; i++){
        //     for(int j = 2; j <= sqrt(i); j++){
        //         if(i%j == 0){
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if(flag == 0){
        //         count++;
        //         cout<<i<<" ";
        //     }else{
        //         flag = 0;
        //     }
        // }
        // return count;

        //optimeized approach S.O.E

        vector<bool> primes(n,1);
        //cancled 0,1 
        int count = 0;
        // for 2 to n-1 
        for(int i = 2; i < (n);i++){
            if(primes[i]){
                count++;
                //uske multiple non prime krdo
                for(int j = i*2 ;j < n;j = j+i){
                    primes[j] = 0;
                }
            }
        }
        return count;
    }
};