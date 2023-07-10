//character array input output

#include<iostream>
using namespace std;

int main(){
    char arr[100];
    cin>>arr;   // sirf word ko input lega sentence ko input krne ka alag method hai
    cout<<arr; // only print jab tak space na ho 
    cout<<endl;
    cout<<arr[2];
    int i =0;
    while (arr[i] != '\0')
    {
        cout<<arr[i];  // sirf first word output ho ta hai na ki sentence
        i++;
    }
    
    return 0;
}