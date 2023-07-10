#include<bits\stdc++.h>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;
    public:
        int getAge(){
            return this->age;
        }
        void setWeight(int w){
            this->weight = w;
        }
        int getWeight(){
            return this->weight;
        }
};

// public mode inheritence
class male:public Human{
    public:
        string color;
        void sleep(){
            cout<<"male is sleepingn\n";
        }
}; 

//protected mode inheritence
// class male:protected Human{
//     public:
//         int getAge(){
//             return this->age; //can access here in case of protected
//         }
//         string color;
//         void sleep(){
//             cout<<"male is sleepingn\n";
//         }
// }; 

// class WhiteMale:protected male{
//     public:
//         int getAge(){
//             return (this->age) + 1; //this is also fine
//         }
// };

//public->public -> public
//public->protected -> protected
//public->private -> private

//protected->public,protected -> protected
//protected->private -> private

//private ->public,protected,private -> not possible

int main(){
    male obj1;
    // WhiteMale obj2; //protected
    cout<<obj1.age<<endl; //pro and public 
    // cout<<obj1.getAge()<<endl; //protected
    // cout<<obj2.getAge()<<endl; //protected
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    obj1.color = "Indian-white"; 
    cout<<obj1.color<<endl;
    obj1.sleep();
    obj1.setWeight(55);
    cout<<obj1.weight;
    return 0;
}