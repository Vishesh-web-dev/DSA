#include<bits\stdc++.h>
using namespace std;
class kirana{
    int id;
    float price;
    public:
     void setData(int a,float b){
        id = a;
        price = b;
     }
     void getData(void){
        cout<<"Id: "<<id<<endl;
        cout<<"Price: "<<price<<endl;
     }
};
int main(){
    int size = 3;
    kirana* shop = new kirana[size];
    // shop[i] = *(shop + i)   
    kirana* shoptemp = shop; 
    for (int i = 0; i < size; i++)
    {

        shop->setData(i+1,(i+1)*10);
        //this
        // shop[i].getData();
        //or
        shop->getData();
        shop++;
    }
    shop = shoptemp;
    delete[] shop;
    delete shoptemp;
    return 0;
}