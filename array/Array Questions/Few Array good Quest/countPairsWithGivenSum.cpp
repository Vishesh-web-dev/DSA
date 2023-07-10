int getPairsCount(int arr[], int n, int k) {
        // code here
        //bf tle
        // int count = 0;
        // for(int i = 0 ;i < n-1 ; i++){
        //     for(int j = i+1 ;j < n;j++){
        //         if(arr[i] + arr[j] == k)count++;
        //     }
        // }
        // return count;
        
        //hashing
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
        }
        int freq[maxi+1];
        for(int i = 0 ; i< n;i++){
            freq[arr[i]]++;
        }
        //indexes would be sorted and have number attached to it what is its freq
        //now just nueed to handle it 
        //also we can apply 2 pointers now 
        //start from begin and end 
        int pairs = 0;
        int ei,si;
        int s = 1 ,e = maxi;
        while(s <= e){
              if(s == e && s + e == k && freq[s]!=0&&freq[e]!=0){
                  si = freq[s];
                  pairs += si*(si-1)/2;
                  s++;
              }else if(s != e && s+e == k && freq[s]!=0&&freq[e]!=0){
                  si = freq[s];
                  ei = freq[e];
                  pairs += si*ei;
                  s++;e--;
              }else if(freq[s]!=0&&freq[e]!=0&&s+e>k){
                  e--;
              }else if(freq[s]!=0&&freq[e]!=0&&s+e<k){
                  s++;
              }else if(freq[s]==0&&freq[e]==0){
                  s++;e--;
              }else if(freq[s]==0){
                  s++;
              }else if(freq[e]==0){
                  e--;
              }
        }
        return pairs;
    }