// xor given array to array of 1 to n-1 elements of array 
// new array mai apn 0 bhi daal denge toh size sam eho jaenga 
#include<iostream> 
using namespace std;
int duplicate(int a[],int n){
    int ans = 0;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i] ^ array[i];
    }
    return ans;
}
//self visit approach *** imp O(n) and O(1) space
int dup2(int a[],int n){
    for(int i = 0; i<n ; i++){
        int idk = abs(a[i]); //positive array value
        //ab us array value ka use krke usi index mai jaenge aur visit kr denge 
        // by negating its value their
        //if already visited
        if(a[idk] < 0){
            return idk;
        }
        a[idk] = -a[idk];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<dup2(a,n); 
    return 0;
}