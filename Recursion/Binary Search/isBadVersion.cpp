// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int isBad(int s,int e){
        int mid = s+(e-s)/2;
        if(s > e){
            return mid;
        }
        
        if(isBadVersion(mid)) {
            return isBad(s,mid-1);
        }else{
            return isBad(mid+1,e);
        }
    }
    //according to template

    // int isBad(int s,int e){
    //     int mid = s+(e-s)/2;
    //     if(s >= e){
    //         return s;
    //     }
        
    //     if(isBadVersion(mid)) {
    //         return isBad(s,mid);
    //     }else{
    //         return isBad(mid+1,e);
    //     }
    // }
    
    int firstBadVersion(int n) {
        //Beats 100% iterative
        // int s = 1 , e = n;
        // int mid = s + (e-s)/2;
        // int ans = -1;
        // while(s <= e){
        //     bool isBad = isBadVersion(mid);
        //     if(isBad){
        //         ans = mid;
        //     }

        //     if(isBad){
        //         e = mid - 1;
        //     }else{
        //         s = mid + 1; 
        //     }
        //     mid = s + (e-s)/2;
        // }
        // return ans;
        //instead of above code we can use template also  
        //Recursion
        return isBad(1,n);
    }
};