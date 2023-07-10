//character array
#include<iostream>
using namespace std;

int main(){
   char arr[100] = "apple is my friend"; // koi bhi bade se number ka array bna lo
                                         // friend ke baad ek null char already hai
    int i = 0;
    while (arr[i] != '\0' )
    {
        cout<<arr[i];
        i++;
    }
    
    return 0;
}