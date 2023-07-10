#include<iostream>
using namespace std;

int main(){
    //in character array the char array name refers to the whole array i.e
    //when we print char array by its name it print all the elements in the array index wise also we can 
    //so when we create char pointer and store adderess of the char array 
    //it store all the elements in the array itself and also the first element by derefferncing it
    // char arr[5] = "Vish"; // one null character
    // char *p = arr;
    // cout<<p<<" "; //it will print Vish ***

    // // also 
    // //*p will print first character in the array
    // cout<<*p; // V

    //size of pointer and array 
    // int arr[10] = {0};
    // int *p = arr;
    // cout<<"size of array name: "<<sizeof(arr)<<" & pointer size : "<<sizeof(p); // 40 4/8

    int arr[10] = {0};
    // arr++; // error
    // cout<<*arr; // gives error

    //but
    // int *parr = arr;
    // parr++; // error free
    // cout<<*parr; // second element 


    //when null character is not given then
    char temp = 'z';
    char *pointer = &temp;
    cout<<pointer;//prints z and continuning print after wards it gets null character 

    return 0;
}