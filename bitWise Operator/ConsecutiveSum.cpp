long long int canBeSumofConsec(long long int n) { 
        // code here
        if((n)&(n-1)){
            return 1;
        }else{
            return 0;
        }
    } 
    // ??? revisit 