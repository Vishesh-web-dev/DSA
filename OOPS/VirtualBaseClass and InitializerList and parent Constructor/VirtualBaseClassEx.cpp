#include<bits\stdc++.h>
using namespace std;
class student{
    protected:
        int roll_no;
    public:
        void set_roll(int a){
            roll_no = a;
        }
        void print_roll(){
            cout<<"Your roll number is "<<roll_no<<endl;
        }
};
class test:virtual public student{
    protected:
        float maths, physics;
    public:
       void set_marks(float m1,float m2){
            maths = m1;
            physics = m2;
       }
       void print_marks(){
        cout<<"Your result is here: "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
       }
};
//class sports with virtual base class as student
class sports:virtual public student{
    protected: 
        float score;
    public:
        void set_score(int score){
            this->score = score;
        }
        void print_score(void){
            cout<<"Your PT score is: "<<score<<endl;
        }
};
class result:public test,public sports{
    private:
        float total;
    public:
        void display(void){
            total = maths+physics+score;
            print_roll();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};
int main(){
    result vishesh;
    vishesh.set_marks(88,94.5);
    vishesh.set_roll(108201138);
    vishesh.set_score(95.5);
    vishesh.display();

    return 0;
}