long long int nth(long long int n){
        if(n == 1){
            return 0;
        }
        if(n == 2){
            return 1;
        }
        long long int term = (nth(n-2)* nth(n-2)) - (nth(n-1));
        return term;
    }
    void gfSeries(int N)
    {
        // Write Your Code here
        for(int i = 1; i <= N; i++){
            cout<<nth(i)<<" ";
        }
        cout<<endl;
    }