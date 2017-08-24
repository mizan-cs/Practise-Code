#include<iostream>

using namespace std;

class mizan
{
public:
        int x,y;
public:
        mizan(int a,int b)
        {
                x=a;
                y=b;
                cout<<"sum is "<<x+y;
        }
        ~mizan(){cout<<"\nDestructor Function from Mizan Class";}
};

int main()
{
                mizan me(10,20);

                return 0;
}
