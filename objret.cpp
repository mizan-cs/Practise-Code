#include<iostream>
#include<string.h>
using namespace std;

class ObjRet{
        char name[25];

public:
        ObjRet(){
                cout<<"Creating......."<<endl;
        }
        void GetName(char *n)
        {
                strcpy(name,n);
        }
        void PrintName()
        {
                cout<<"\n\nSo Your Name is: "<<name<<endl;
        }
        ~ObjRet(){
                cout<<"Destructing........"<<endl;
        }
};

ObjRet funcA(void)
{
        char getName[25];
        ObjRet ob;

        cout<<"Enter Your Name: ";
        cin>>getName;

        ob.GetName(getName);

        return ob;
}

int main()
{
        ObjRet obMain;

        obMain=funcA();

        obMain.PrintName();

        return 0;
}
