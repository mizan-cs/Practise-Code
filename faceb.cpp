#include<iostream>
using namespace std;
class First
{
public:
    void show1()
    {
        cout<<"This is main base class"<<endl;
    }
};

class secound:public First
{
public:
    void show2()
    {
        cout<<"This is First derive class"<<endl;
    }
};

class Third:public secound
{
public:
    void show3()
    {
        cout<<"This is second derive class"<<endl;
    }

};

int main()
{
    Third t1;
    t1.show1();
    return 0;
}
