class Solution {
public:
    int firstBadVersion(int n) {
        int s = 1 , e = n;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s <= e){
            bool isBad = isBadVersion(mid);
            if(isBad){
                ans = mid;
            }

            if(isBad){
                e = mid - 1;
            }else{
                s = mid + 1; 
            }
            mid = s + (e-s)/2;
        }
        return mid;
    }
};