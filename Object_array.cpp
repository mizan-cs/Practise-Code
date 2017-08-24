#include<iostream>
#include<string.h.

using namespace std;

class Person{
        char name[25];

public:
        void GetName(char *n){
                strcpy(name,n);
        }
        void PrintName()
        {
                cout<<"\nSo your name is: "<<name<<endl;
        }
};


int main()
{

}
