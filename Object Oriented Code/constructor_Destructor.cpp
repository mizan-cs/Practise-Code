#include<iostream>
#include<stdio.h>
using namespace std;

class box{
private:
    int hight;
    int wight;
public:
    int area();
    box(int h, int w);
    ~box();

};

box::box(int h, int w)
{
    hight = h;
    wight = w;
    cout<<"Constructor"<<endl;
}
box::~box()
{
    cout<<"Destructor"<<endl;
}

int box::area()
{
    return (hight*wight);
}

int main()
{
    box red(3,6);
    cout<<"Area "<<red.area()<<endl;
    //getch();
    return 0;

}
