#include<bits\stdc++.h>
using namespace std;
class hero{
    private: 
    int health;

    public: 
    char level;
    char *name;
    void sethealth(int h){
        health = h;
    }

    int gethealth(){
        return health;
    }

    hero(){
        cout<<"Default constructor created\n";
        name = new char[100];//memory assigned
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
        cout<<"name: "<<this->name<<endl;
    }

    //copy constructor
    hero(hero &obj){
        //ch mai name ki value daali
        char *ch = new char[strlen(obj.name) + 1];
        strcpy(ch,obj.name);

        //now this ke name mai ch ki value daal do
        //and iske name pointer mai ch ka address daal diya
        //think easy to understand
        this->name = ch;

        this->level = obj.level;
        this->health = obj.health;
    }
};

int main(){
    hero h1; //object creation

    //setting values to its members
    h1.sethealth(112);
    h1.level ='S';
    char name[8] = "vishesh";
    h1.setName(name);

    //print hero 1
    h1.print();

    /*

    //use default copy constructor
    hero h2(h1);
    
    //print hero 2
    h2.print();

    //changing name of hero 1
    h1.name[0] = 'K';

    //print hero 1
    h1.print();

    //print hero 2 //here hero 2's name will also get changed ?? ==> shallow copy
    //here we are accessing same memory with two differnect names..
    h2.print();

    //now change helath
    h1.sethealth(99);

    //print h2 health //here no change will occur cause health is not a paointer vairable
    cout<<h2.gethealth();

    */

    //deep copy in user defined copy constructor
    //here we create new name character array inside copy constructor cause it will then only create 
    //deep copy
    hero h2(h1);
    h2.print();


    //changing name of hero 1
    h1.name[0] = 'K';

    //print hero 1
    h1.print();

    //print hero 2 //here no change deep copy
    h2.print();

    //copy assignment operator
    h1 = h2; //all values of h2 is copied in h1's members value including name, level , health.
    h1.print(); //name is vishesh now
    return 0;
}