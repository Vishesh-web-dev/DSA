long long power(int N,int R)
    {
       //base condition
       if(R == 0){
           return 1;
       }
       if(R == 1)return N;
       int long long n = N;
       
       //if even power(n^2,r/2) else odd ==> power n*(n^2,r/2)
       if(R%2 == 0){
           return (power((n%mod*n%mod)%mod,R/2))%mod;
       }else{
           return (n%mod*power((n%mod*n%mod)%mod,R/2))%mod;
       }
    }