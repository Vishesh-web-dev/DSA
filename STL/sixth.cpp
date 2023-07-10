#include<bits\stdc++.h>
using namespace std;

int main(){
    // set<int> s;
    // s.emplace(5);
    // s.emplace(8);
    // s.insert(2);
    // s.emplace(4);
    // s.emplace(2);
    // s.insert(3);
    // set<int>::iterator i = s.begin();

    // for(auto i : s){
    //     cout<<i<<endl;
    // }
    // // cout<<endl;
    // advance(i,2);
    // advance(i,-1);

    // while (i!=s.end())
    // {
    //     cout<<*i<<" ";
    //     i++;
    // }
    // cout<<endl;
    // auto k = s.find(5); // returns iterator to 5
    // cout<<*k<<endl;

    // auto presentOrNot = s.count(1); // if present return true or else return false
    // cout<<presentOrNot<<endl;  


    // //s = 2 3 4 5 8
    // //now
    // s.erase(3); //2 4 5 8 //element
    // auto it1 = s.find(4);
    // s.erase(it1);// by iterator // 2 5 8
    // //can remove multiple as we
    // it1 = s.find(5);
    // auto it2 = s.find(8);
    // s.erase(it1, it2);
    // cout<<"Elements after erasing : ";
    // for(auto i : s){
    //     cout<<i<<" ";
    // }


    //multiset
    multiset<int> ms;
    ms.insert(1); // logn
    ms.insert(1);
    ms.insert(4);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(4);



    auto i = ms.find(1); //returns iterator;
    auto i2 = ms.find(1);

    auto count = ms.count(1);
    advance(i2,count - 1);
    cout<<"Count: "<<count<<endl;
    
    ms.erase(4);//erase all 4 inti
    ms.erase(i,i2); //remove all the 1's except leave 1 only 

    //printing multiset
    for(auto i: ms){
        cout<<i<<" ";
    }
    return 0;
}