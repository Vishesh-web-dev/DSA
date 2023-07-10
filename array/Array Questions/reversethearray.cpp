//reverse after m index
//ex if 1 2 3 4 5 and m = 2 
//ans = 1 2 3 5 4
//use 2 pointer approach i.e. ==> while(st<en)....

#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
    int st = m+1,en = arr.size()-1;
	// Write your code here.
     while(st < en){
         swap(arr[st],arr[en]);
         st++;
         en--;
     }
}
