#include<iostream>
#include<string.h>

using namespace std;

class A{
        int privateA;
public:
        int getA(){
                cout<<"Enter a value: \t";
                cin>>privateA;
                return privateA;
        }
        void PrintA(){
                cout<<"Private A is: \t"<<getA()<<endl;
        }
};

class B: private A{
        int privateB;
public:
        void PrintB(){
                privateB=getA();
                cout<<"Private B is; \t"<<privateB<<endl;
        }
};

int main(){
        A a1;
        B b1;

        a1.PrintA();
        b1.PrintB();

        return 0;
}


