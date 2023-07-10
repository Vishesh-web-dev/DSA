class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //start from last and add cary to new element
        for(int i = digits.size() - 1; i >= 0 ; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i] = digits[i] + 1;
                break;
            }
        }
        if(digits[0] == 0){
                digits.emplace(digits.begin(),1);
        }
        return digits;
    }
};