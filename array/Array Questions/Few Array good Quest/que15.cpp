// 2 pointers algorithm
// subarray with given sum 
// find a countinuous subarray which adds to a given number S
// time complexity of this solution is O(n)
//hold 
// a[en] + sum > givensum 
// and sum - a[st] < givensum
//SLIDING WINDOW APPROACH 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int givensum ;
    cout<<"what is the sum ";
    cin>>givensum ;

    int i = 0,j = 0,st = -1,en = -1, sum = 0;



    return 0;
}