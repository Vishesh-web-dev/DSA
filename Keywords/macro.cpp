#include<iostream>
using namespace std;
//for theory read from notebook
//object type
#define PI 3.1416
#define mod 1000000007 

//chain type macros
#define VISHESH HAS 
#define HAS Followers
#define Followers 123

//MULI LINE MACROS
#define numbers 1,\
                2,\
                3

//function like macros
#define min(a,b) ((a>b)?b:a)
#define Vol(a,b,c) a*b*c
#define max(a,b) ((a>b)?a:b)

//combinationl
// #define  PI  3.1416
#define  AreaOfCone(r,l)  (PI*(r)*(l))

int main(){
    int r = 5;
    // double PI = 3.14;
    // cout<<3.14*r*r;
    // cout<<PI*r*r;
    cout<<"Area of the circle: "<<PI*r*r<<endl;
    cout<<"Vishesh's followers : "<<VISHESH<<endl; //123
    int arr[3] = {numbers};
    cout<<"Array's first element: "<<arr[0]<<endl;

    int a1 = 10, a2 = 12;
    cout<<"Minimum of a1 and a2 :"<<min(a1,a2)<<endl;
    cout<<"Maximum of a1 and a2 :"<<max(a1,a2)<<endl;

    int l1 = 2,l2 = 3,l3 = 4;
    int Volume = Vol(l1,l2,l3);
    cout<<"Volume: "<<Volume;

    int le = 5,ra = 2;
    cout<<"Surface Area of the cone: "<<AreaOfCone(5,2);
    return 0;
}