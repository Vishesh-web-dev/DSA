class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0){
            return 1;
        }
        int mask = 0,count = 0;
        int originalN = n;
        while(n != 0){
            n = n >> 1;
            count++;
        }
        while(count--){
            mask = (mask << 1) | 1;
        }
        return (~originalN)&(mask);
    }
};