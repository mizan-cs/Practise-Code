#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void Type(){
            cout<<"This is Shape Object"<<endl;
        }
};

class Circle:public Shape{
    public:
        void Type(){
            cout<<"This is Circle Type"<<endl;
        }
};

class Rectangle:public Shape{
    public:
        void Type(){
            cout<<"This is Rectangle Object"<<endl;
        }
};

class Polygon:public Shape{
    public:
        void Type(){
            cout<<"This is polygon Object"<<endl;
        }
};

int main(){
    Shape *ptr;
    Circle c;
    Rectangle r;
    Polygon p;

    //------------
    ptr=&c;
    ptr->Type();

    ptr=&r;
    ptr->Type();

    ptr=&p;
    ptr->Type();

    c.Type();
    r.Type();
    p.Type();

    return 0;
}
