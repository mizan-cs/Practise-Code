#include<iostream>
using namespace std;

class classA{
public:
        int a,b;
public:
        classA(int x, int y)
        {
                a=x;
                b=y;
        }
        int add_AB()
        {
                return a+b;
        }

};

void funcA(classA obj);

int main()
{
        classA ob1(10,20);

        funcA(ob1);

        return 0;

}

void funcA(classA obj)
{
        int getObjValue;

        getObjValue=obj.add_AB();

        cout<<"Value of  "<<obj.a<<" + "<<obj.b<<" is "<<getObjValue<<endl;
}
