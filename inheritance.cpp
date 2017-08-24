#include<iostream>
#include<string.h>
using namespace std;

class Student{
        char name[20];
        char id[10];

public:
        Student(char* name, char *id){
                strcpy(Student::name,name);
                strcpy(Student::id,id);
        }

        void ShowInfo(){
                cout<<"Name:\t"<<name<<endl;
                cout<<"ID:\t"<<id<<endl;
        }
};

class Registration : public Student{
        float regFee;
        char *regDate;

public:
        Registration(char *name, char *id, float fees, char *date): Student(char* name, char *id){
                regFee=fees;
                strcpy(Registration::regDate,date);
        }

        void ShowTotalInfo(){
                ShowInfo();
                cout<<"Reg fees:\t"<<regFee<<" Tk"<<endl;
                cout<<"Reg Date:\t"<<regDate<<endl;
        }
};

int main(){
        //Student mizan("Mzianur","1233445");

        Registration mizan("Mizan","122335",1200,"12/06/2016")
        mizan.ShowAllInfo();

        return 0;
}
