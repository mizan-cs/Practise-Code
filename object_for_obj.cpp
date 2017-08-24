#include<iostream>
using namespace std;

class Sample{
public:
        int h;
        int w;
public:
        void PrintArea()
        {
                cout<<"Area is = "<<h*w<<endl;
        }

};

int main()
{
        Sample box1,box2;

        box1.h=10;
        box1.w=20;

        box2=box1;

        box2.PrintArea();

        return 0;
}
