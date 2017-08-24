#include<iostream>
#include<string.h>
using namespace std;

class Student{
public:
        char sname[20];
        char sid[10];

public:
        void getinfo(char *name, char *id){
                strcpy(sname,name);
                strcpy(sid, id);
        }

        void showinfo(){
                cout<<"Name:\t"<<sname<<endl;
                cout<<"ID:\t"<<sid<<endl;
        }
};

class bestStudent :public Student{
        int s_roll;
        float s_result;

public:
        void getbeststudent(char *name, char *id, int roll, float res){
                 strcpy(sname,name);
                strcpy(sid,id);
                s_roll=roll;
                s_result=res;
        }
        void showbeststudentinfo(){
                cout<<"Name:\t"<<sname<<endl;
                cout<<"ID:\t"<<sid<<endl;
                cout<<"Roll:\t"<<s_roll<<endl;
                cout<<"Result:\t"<<s_result<<endl;
        }
};

/*void bestStudent::getbeststudent(char *name, char *id, int roll, float res){
        strcpy(sname,name);
        strcpy(sid,id);
        s_roll=roll;
        s_result=res;
}*/

int main(){
        //Student mizan;
        bestStudent mizan;

        mizan.getbeststudent("Mzian","123456",835816,3.36);
        mizan.showbeststudentinfo();
        //mizan.getinfo("Mizan","835816");

        //mizan.showinfo();

        return 0;
}
