// largest word in a sentence
// how to take input a sentence also 
#include<iostream>
using namespace std;

int main(){
    // taking a sentence in by using sp. function get line
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cin.getline(arr,n);  // pura sentence lega 
    cin.ignore();

    int i = 0;
   
    // largest word
    int ans = 0,counter = 0;
    while(1){
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (counter > ans)
            {
                ans = counter;
                
            }
            counter = 0;
        }else
        {
            counter++;
        }
        
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
        
    }
    
    cout<<ans<<endl;
    return 0;
}