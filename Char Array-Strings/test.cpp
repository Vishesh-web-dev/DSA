#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "I Love Coading";
    string s = "@40";
	string res;
	for(int i = 0; i<str.length();i++){
          if (str[i]-32 == 0) {
			res = res + s;
          }else{
            res = res + s[i];
		  }
        }
	
	cout<<res;

    return 0;
}