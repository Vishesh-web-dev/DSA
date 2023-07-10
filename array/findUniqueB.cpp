// find unique element in an array
// return element if found else return -1
//bruteforce approach

#include<iostream>
using namespace std;
int findUnique(int a[],int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i] == a[j]){
                count++;
            }
        }
        if(count == 1){
            return a[i];
        }
        count = 0;
    }
    return -1;
}
int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){cin>>a[i];}
    int unique = findUnique(a,n);
    cout<<"Unique element is: "<<unique<<endl;
    return 0;
}