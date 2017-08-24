#include<iostream>

using namespace std;

class rectangle{
private:
        int hight;
        int wight;
public:
        int area();
};

inline int rectangle::area()
{
       cin>>hight>>wight;
        return hight*wight;
}

int main()
{
        rectangle red;

        cout<<"Area is "<<red.area()<<endl;

        return 0;
}
