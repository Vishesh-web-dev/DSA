#include<bits\stdc++.h>
using namespace std;

int main(){
    map<int,int> mp;
    map<int,pair<int,int>>mp2;
    map<pair<int,int>,int>mpp;

    mp[1] = 2;
    mp.emplace(4,3);
    mp.insert({2,5});
    mp[7] = 4;
    mp[-4] = 9;

    for(auto i : mp){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<< mp[4]<< " "<< mp[-2]<<"\n"; // 3 0/null
    

    auto itr = mp.find(7);
    //upper and lowwer bound

    //multimap
    //have duplicate keys and sorted order

    //
    int arr[10] = {1,2,2,2,5,5,7,8,9,7};
    unordered_map<int,int> um;
    //storing frequency of array element as key value pair
        for(int i = 0 ; i < 10;i++){
            um[arr[i]]++;
        }
        for(auto i : um){
            cout<<i.first<<" "<<i.second<<endl;
        }
     
    return 0;
}