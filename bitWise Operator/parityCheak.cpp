 string computeParity(int N) {
        // code here'
        int count = 0;
        while(N != 0){
            if(N&1){ //last bit one hai
                count++;
            }
            N = N>>1; //N ko update kr do
        }
        if(count&1){
            return "odd";
        }else{
            return "even";
        }
    }