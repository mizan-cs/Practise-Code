#include<iostream>

using namespace std;

class rectangle{
        int hight;
        int wight;

public:
        void set(int a, int b);
        int ShowArea();
};

inline void rectangle::set(int a, int b)
{
        hight=a;
        wight=b;
}

int rectangle::ShowArea()
{
        return hight*wight;
}

int main()
{
        rectangle obj1,obj2;

        obj1.set(3,4);
        obj2.set(5,6);

        cout<<obj1.ShowArea()<<endl;
        cout<<obj2.ShowArea()<<endl;

        return 0;
}
