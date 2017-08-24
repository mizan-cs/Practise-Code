#include<iostream>
#include<string.h>

using namespace std;

class Student{
        char s_name[20];
        char s_id[10];

public:
        Student(char *name, char *id){
                strcpy(s_name,name);
                strcpy(s_id,id);
        }

        void Showinfo(){
                cout<<"Name:\t"<<s_name<<endl;
                cout<<"ID:\t"<<s_id<<endl;
        }
};


class BestStudent:public Student{
        float regFee;
        char* regDate;

public:
        BestStudent(char *name, char *id, float fees, char *date):Student(name,id){
                regFee=fees;
                strcpy(regDate,date);
        }

        void ShowBestStudent(){
                Showinfo();
                cout<<"Reg : Fees:\t"<<regFee<<endl;
                cout<<"Reg Date:\t"<<regDate<<endl;
        }
};

int main(){
        BestStudent mizan("Mzianur Rahman","123456",1200,"12/10/16");

        mizan.ShowBestStudent();

        return 0;
}
