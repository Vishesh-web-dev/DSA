//it does not pass variable s by refernce hence it is unchanged while passing to function
// i.e it passes value to function by copying the value of original string
// it does not work as array as any change in its value reflects in the array itself
// so for string we have to use pointers 
#include<iostream>
#include<string> 
using namespace std;
void change(string s){
    for(int i = 0;i<s.length();i++){
        s[i] = 'a';
    }
}
int main(){
    // string s;
    // cin>>s;
    // cout<<"Original "<<s<<endl;
    // change(s);
    // cout<<"Changed "<<s<<endl;

    //2.
    // string str = {'s','t','r','s','\0','c'};
    // char arr[100] = {'a','r','r','r','\0','c'};
    // cout<<"String: "<<str<<endl;
    // cout<<"Character array: "<<arr<<endl;



    return 0;
}