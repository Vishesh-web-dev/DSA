//leetcode
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> m;
        for(int i = 0 ; i< answers.size() ; i++){
            m[answers[i]]++;
        }
        //minimum rabbits pegion hole problem
        int numberOfRabbits = 0; 
        for(auto i : m){
            int pairs = i.second / (i.first+1);
            int leftovers = i.second - pairs * (i.first+1);
            numberOfRabbits += (i.first+1)*pairs;
            if(leftovers!=0){
                numberOfRabbits+=(i.first+1);
            }
        }
        return numberOfRabbits;
    }
};