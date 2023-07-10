//for positive number
#include<iostream>
using namespace std;
int findU(int a[],int n){
    int maxE = INT32_MIN;
    for (int i = 0; i < n; i++){
        maxE = max(maxE,a[i]);
    }
    int Da[maxE+1] = {0};
    for (int i = 0; i < n; i++)
    {
        Da[a[i]]++;
    }
    for (int i = 0; i < maxE+1; i++)
    {
        if(Da[i] == 1){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){cin>>a[i];} 
    int unique = findU(a,n);
    cout<<unique<<endl;
    return 0;
}