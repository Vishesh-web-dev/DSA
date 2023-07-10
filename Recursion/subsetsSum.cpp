//same as subsets exclude include
void solved(vector<int>& ans,int sum,vector<int> arr,int n,int i){
        if(i == n){
            ans.push_back(sum);
            return;
        }
        
        //exclude
        solved(ans,sum,arr,n,i+1);
        
        //include
        sum += arr[i];
        solved(ans,sum,arr,n,i+1);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int sum = 0;
        vector<int> ans;
        int i = 0;
        solved(ans,sum,arr,N,i);
        return ans;
    }