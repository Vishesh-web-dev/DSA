#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here
  int n = str.length();
  if(n&1){
    return -1;
  }
  stack<int> st;
  int ans = 0,opencnt = 0;
  for (int i : str) {
    // agar stack empty ho aur } ho toh push and increase cnt
    if (st.empty() && i == '}'){
       ans++;
       st.push('{');
       opencnt++;
    }else if((st.empty()) || (opencnt < n/2 && i == '{')){
      //half time se kam appear hua ho toh bhi push
      //ya empty ho toh also half time se jyada pr empty nhi ho skta
      opencnt++;
      st.push('{');
    }else{
      //half se jyada ho toh change and pop
      if (i == '{') {
        ans++;
      }
      // agar } ho toh no need to change just pop
      st.pop();
    }
  }
  return ans;
}


//better
/*
#include <bits/stdc++.h> 
//This is updated code see previous submission for better understanding
int findMinimumCost(string str) {
  // Write your code here
  int n = str.length();
  if(n&1)return -1;

  stack<int> st;
  int ans = 0,opencnt = 0;

  for (int i : str) {
    if (st.empty() || (opencnt < n/2 && i == '{')) {
      // if galat str[i]
      if (i == '}')ans++;
      //push normal
      st.push('{');
      opencnt++;
    }else{
      //if galat i
      if (i == '{')ans++;
      //pop normal
      st.pop();
    }
  }
  
  return ans;
}
*/
