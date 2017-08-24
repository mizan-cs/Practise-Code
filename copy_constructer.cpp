 #include<iostream>
 #include<string.h>
 using namespace std;


class Student{
public:
        char S_name[20];
        char S_Id[15];
        float S_Cgpa;

        void ShowInfo(void){
                   cout<<"Name \t:"<<S_name<<endl;
                   cout<<"Id \t:"<<S_Id<<endl;
                   cout<<"S_Cgpa\t:"<<S_Cgpa<<endl;
        }
};

void useObject(char *name, char *id, float cgpa)
{
        Student A;

        strcpy(A.S_name,name);
        strcpy(A.S_Id,id);
        A.S_Cgpa=cgpa;
        A.ShowInfo();
}

int main()
{
        useObject("Mzianur Rahman","835816",3.35);
        return 0;
}
