#include<bits\stdc++.h>
using namespace std;
class op{
    int val1,val2;
    string name;
    public:
    //method 1
    op(int val1,int val2,string name):val1(val1),val2(val2),name(name){};
    void operator <<(op obj){
        cout<<obj.val1<<" "<<obj.val2<<" "<<obj.name<<endl;
    }
    // method 2 
    friend ostream& operator<<(ostream& os, const op& obj){
        os<<obj.val1<<" "<<obj.val2<<" "<<obj.name;
        return os;
    }
};
int main(){
    op obj1(1,2,"vishesh");
    obj1<<obj1; //method 1
    cout<<obj1; // method 2

    return 0;
}