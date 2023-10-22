#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(int);
};
void Student :: set_roll_number(int r){
    roll_number= r;
}
void Student ::  get_roll_number(int r){
    cout<<"The roll number is "<<roll_number<<endl;
}
class Exam: public Student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};
void Exam :: set_marks(float m1, float m2){
    maths =m1;
    physics = m2;
}
void Exam :: get_marks(){
   cout<<"The marks obtained in maths are: " <<maths<< endl;
   cout<<"The marks obtained in physics are: " <<maths<< endl;
}
class Result : public Exam{
    float perchantage;
    public:
    void display(){
        cout<<"Your perchantage is :"<<(maths+physics)/2<<endl;
    }
};
int main()
{
Result abhi;
abhi.set_roll_number(420);
abhi.set_marks(90.0, 80.0);
abhi.display();
    return 0;
}