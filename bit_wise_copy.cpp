#include<iostream>
#include<string.h>


using namespace std;

class Student{
        char S_name[14];
        char S_id[10];
        float S_Cgpa;
public:
        void GetInfo(char *name, char *id, float cgpa)
        {
                strcpy(S_name,name);
                strcpy(S_id,id);
                S_Cgpa=cgpa;
        }

        void ShowInfo(void)
        {
                cout<<"Name     :  "<<S_name<<endl;
                cout<<"Id       :  "<<S_id<<endl;
                cout<<"CGPA     :  "<<S_Cgpa<<endl;
        }
};

int main()
{
        Student A,B;

        A.GetInfo("Mizanur Rahman","835816",3.79);
        B=A;
        cout<<"\nPrinting object a information:\n\n";
        A.ShowInfo();

        cout<<"\nPrinting object b information:\n\n";
        B.ShowInfo();

        return 0;
}
