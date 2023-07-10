//two approaches: a) make res string and instert the elements of string acc..
// b) inplace : 
//app:  coutn spaces and resize the string accordingly
//      then take two pointer one at last of the string of new string(j) 
//      and other at last of the original size string(i)
//      then compare it original sized index has character then place it at j
//      if its a space then add @40 and and reduce j for every insertion 
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	 //count space
     //resize the string
     //traverse backwards and place every character to correct position
     //and if space occures add @40 
     int prevSize = str.length();
     int sp = 0;
     for(int i = 0; i< str.length();i++){
         if(str[i] -32 == 0)sp++;
     }
     str.resize(str.length() + 2*(sp));
     int j = str.length()-1;
     int i = prevSize-1;
     while(i >= 0 && j>=0){
         if(str[i] - 32 != 0){
             str[j] = str[i];
             j--;
         }else{
             str[j--] = '0';
             str[j--] = '4';
             str[j--] = '@';
         }
        i--;
     }
    return str;
}