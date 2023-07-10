#include<iostream>
using namespace std;

int main(){
    int a = 5000, b = 1000;
    int m = 7;

    //cout<<(a*b)mod m and m/b mod m
    int multi = (a%m * b%m)%m;
    //ferment's little algo
    int div = (a%m * (b*b*b*b*b)%m)%m; // b^m-2
    cout<<multi<<" "<<div;
    return 0;
}