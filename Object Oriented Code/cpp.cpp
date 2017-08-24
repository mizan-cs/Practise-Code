#include<iostream>
using namespace std;

class student{
private:
    char* name;
    int reg_number;
    int roll;
public:
    float sum();
    int id_no;
};

inline float student::sum()
{

    return roll/reg_number;
}


int main()
{

    student mizan;

    //mizan.name = "Mizanur Rahaman";
    //mizan.reg_number = 743696;
    //mizan.roll = 835816;

    //cout<<"Student name "<<mizan.name<<endl;
    //cout<<"Student Roll "<<mizan.roll<<endl;
    //cout<<"Student Reg. Number "<<mizan.reg_number<<endl;
    cout<<"Summation of roll and reg number is "<< mizan.sum()<<endl;


    return 0;



}
