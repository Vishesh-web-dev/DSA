// pair sum array code studio
#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<vector <int>> ans;
    for(int i = 0;i<arr.size()-1;i++){
        for(int j = i+1;j < arr.size();j++){
            if(arr[i] + arr[j] == s){
                vector <int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    
    return 0;
}