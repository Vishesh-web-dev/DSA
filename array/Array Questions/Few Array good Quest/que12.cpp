//record breaker
// O(n sqr)

// brute force == iterate over all the a[i] and cheak if it is RBD
// due to first condition time compl is O(n^2)
// therefor, optimized aproch would be to optimize first condition 

// since a[i] to be greater than all the previous day == a[i] > max(all previous days)
// by using these property time complexity will become O(n)

#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main(){
    int n; // n>2 question 
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int rbd = 0;
    int maxx = a[0];
    
    for (int i = 0; i < n; i++)
    {
        if (i != 0) // first ke liye i-1 exist nhi krta isliye
        {
            maxx = max(a[i-1],maxx); // sare peeche wale no.s ka max hoga 
        }
          
        if(i == 0 && a[0] > a[1]){
            rbd++;
            
        }else if (a[i] > maxx && a[i] >a[i+1])
        {
            rbd++;
            
        }else if(i==n-1 && a[n-1] > maxx){
            rbd++;
        }
        
    }
    cout<<rbd<<endl;
    
    return 0;
}