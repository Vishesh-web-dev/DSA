// int occ = nums.size()/2;
        // unordered_map<int,int> mp; // O(1)
        // for(int i = 0 ; i < nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // int maxi = 0;
        // int elem;
        // for(auto i:mp){
        //     if(i.second > maxi){
        //         maxi = i.second;
        //         elem = i.first;
        //     }
        // }
        // return elem;

        //more optimized in O(n) and O(1)
        //moore
        int count = 0;
        int elem = 0;

        for(int i : nums){
            if(count == 0){
                elem = i;
            }
            if(i == elem){
                count++;
            }else{
                count--;
            }
        }
        return elem;