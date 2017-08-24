#include<iostream>
#include<string.h>

using namespace std;

void useObject(char *name, char *id, float cgpa)
{
        class Student{
        public:
                char S_name[30];
                char S_id[20];
                float S_cgpa;

                void ShowInfo(void)
        {
                cout<<"Name \t:"<<S_name<<endl;
                cout<<"ID\t:"<<S_id<<endl;
                cout<<"CGPA\t:"<<S_cgpa<<endl;
        }

        };

        Student A;

        strcpy(A.S_name,name);
        strcpy(A.S_id,id);
        A.S_cgpa=cgpa;

        A.ShowInfo();

}

int main()
{
        useObject("Mzianur rahman","835816",3.35);

        return 0;
}
