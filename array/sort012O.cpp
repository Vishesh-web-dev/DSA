//solving just by single scan (or visiting every element only once)
//2 pass algorithm
        //Counting sort
        // 1 pass algorithm 2 pointer
        if(nums.size() == 1)return;
        int m =  0, l = 0 , h = nums.size() - 1;
        //intuition agar M mai 1 hai toh M aage
        //if M mai 0 hai toh swap m to l and increse both??
        //if M mai 2 hai toh swap with h and h--
        //if M == H exit ?? why cause H mai sirf 2 honge it means 
        // saare 2 cross ho chuke hai aage koi 1 nhi hai

        //also increse both cause -- > l mai toh 0 hai he and 
        // l mai 2 nhi ho skta ab kyuki pehle he swap ho chuka hoga
        // think about it

        while(m <= h){
            if(nums[m] == 1){
                m++;
            }else if(nums[m] == 2){
                swap(nums[m],nums[h]);
                h--;
            }else if(nums[m] == 0){
                swap(nums[m],nums[l]);
                l++;
                m++;
            }
        }

    

 