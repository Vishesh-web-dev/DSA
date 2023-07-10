// Split the binary string into substrings with equal number of 0s and 1s

// Given binary string str of length N.
// The task is to find the maximum count of consecutive substrings str can be divided into 
// such that all the substrings are balanced i.e. they have an equal number of 0s and 1s.
// If it is not possible to split str satisfying the conditions then return -1.
//solution is based on moore
//i.e travese through the string and keep counts of 1 and 0 
//if 1 and 0 count become equal increase answer value by 1
//and reduce count of 0 and 1 to 0 again
// also at last if count of 0 and 1 != 0 ==> that string can not be completely split
//then return -1 or if ans == 0 return -1
//else return ans

int maxSubStr(string str){
        //Write your code here
        //based on morre algorithm
        int ans = 0;
        int count = 0;
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i] == '0'){
                count++;
            }else{
                count--;
            }
            
            if(count == 0){ 
                ans++;
            }
        }
        
        if(ans == 0 || count!=0)return -1;
        return ans;
    }