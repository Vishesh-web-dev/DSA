//PAIR SUM PROBLEM
//cheak if there exist two element inan array such that their sum is equal to given k 
// brute force

#include<iostream>
using namespace std;

bool cheakif(int n,int arr[],int k){
    
   for (int i = 0; i < n-1; i++)
   {
       for (int j = i+1; j < n; i++)
       {
           if (arr[i] + arr[j] == k)
           {
               cout<<i<<" "<<j<<endl;
               return true;
           }
           
       }
       
   }
   return false;
}

int main(){
    
    int arr[] = {2,4,7,11,14,16,20,21};
    
    
    int k = 31;
    

    cout<<cheakif(8,arr,k);
    
    return 0;
}