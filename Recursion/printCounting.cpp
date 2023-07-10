#include<iostream>
using namespace std;
//tail rec.
void printRev(int n){
    if(n == 0){
        return; //stop
    }
    cout<<n<<" "; //processing
    printRev(n-1); //R.R.
}
//head rec
void printFor(int n){
    if(n == 0){
        return; //stop
    }
    printFor(n-1);//processing
    cout<<n<<" "; //R.R.
}
int main(){
    //print till 1;
    int n;
    cin>>n;

    cout<<endl;
    
    printRev(n);

    cout<<endl;
    cout<<endl;
    cout<<endl;

    printFor(n);
    return 0;
}