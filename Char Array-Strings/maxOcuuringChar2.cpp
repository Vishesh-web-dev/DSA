#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 1;
    vector<int> freq;
    // vector<int> indices;
    for (int i = 0; i < s.length() - 1; i++)
    {
        for (int j = 1; j < s.length(); j++)
        {
            if(s[i] == s[j]){
                count++;
            }
        }
        freq.push_back(count);
        count = 1;
    }

    int maxf = 0;
    int maxfi;
    for(int i = 0; i<freq.size();i++){
        if(maxf < freq[i]){
            maxf  = freq[i];
            maxfi = i;
        }
    }
    cout<<s[maxfi]<<endl;
    return 0;
}