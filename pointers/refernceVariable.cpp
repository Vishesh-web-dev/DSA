#include<iostream>
using namespace std;
//lets accept the n using refernce varaible concept
void update(int& k){
    k++;
}
//or
void update2(int& n){
    n++;
}
int main(){
    //same memory differnt names of the same varaible is reference varaible
    int i = 5;
    int &j = i;
    cout<<i<<endl; //5
    i++;
    cout<<j<<endl; //6
    j++; 
    cout<<i<<endl; //7
    // A)
    //need of refernce variable is similar to pointer
    int n = 10;
    cout<<"Before: "<<n<<endl;
    //lets pass n using refernce variable
    update(n); // 11
    update2(n); // 12 
    cout<<"After: "<<n<<endl; // 12
    return 0;
}