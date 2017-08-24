#include<iostream>
#include<string.h>

using namespace std;

class Student{
        char S_name[14];
        char S_id[10];
        float S_cgpa;

public:
        void GetInfo(char *name, char *id, float cgpa)
        {
                strcpy(S_name,name);
                strcpy(S_id,id);
                S_cgpa=cgpa;
        }
        void ShowInfo()
        {
                cout<<"Name:\t"<<S_name<<endl;
                cout<<"ID:\t"<<S_id<<endl;
                cout<<"CGPA:\t"<<S_cgpa<<endl;
        }

};

int main()
{
        Student A,B;

        A.GetInfo("Mzian","835816",3.35);
        B=A;
        B.ShowInfo();

        return 0;
}
