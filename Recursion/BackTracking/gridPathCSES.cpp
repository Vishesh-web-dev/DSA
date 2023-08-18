#include<bits\stdc++.h>
using namespace std;
void solve(vector<vector<int>> mat,string str,long long &cnt,int i,int j,int pos){
    cout<<"yes\n";
    if(i < 0 || j < 0 || i >= 7|| j >= 7){
        return;
    }
    if((i == 6 && j == 0)){
        if(pos >= 48){
            cnt++;
        }
        return;
    }
    if(mat[i][j] == -1 ){
        return;
    }

    if(str[pos] == '?'){
    //down
        str[pos] = 'D';
        mat[i][j] = -1;
        solve(mat,str,cnt,i+1,j,pos+1);
        str[pos] = '?';
        mat[i][j] = 0;
    
    //up
        str[pos] = 'U';
        mat[i][j] = -1;
        solve(mat,str,cnt,i-1,j,pos+1);
        str[pos] = '?';
        mat[i][j] = 0;
    
    //right
        str[pos] = 'R';
        mat[i][j] = -1;
        solve(mat,str,cnt,i,j+1,pos+1);
        str[pos] = '?';
        mat[i][j] = 0;

    //left
        str[pos] = 'L';
        mat[i][j] = -1;
        solve(mat,str,cnt,i,j-1,pos+1);
        str[pos] = '?';
        mat[i][j] = 0;
    }
}
int main(){
    vector<vector<int>> mat(7,vector<int>(7,0));
    mat[0][0] = 1;//start
    mat[0][6] = 2 ;//end
    string str;
    cin>>str;
    int i = 0,j = 0,pos = 0;
    long long cnt = 0;
    solve(mat,str,cnt,i,j,pos);
    cout<<cnt<<endl;
    return 0;
}