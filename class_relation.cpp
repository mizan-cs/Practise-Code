#include<iostream>

using namespace std;
//------------------------Declare class A
class A{
private:
        int PrvA1;

public:
        A()
        {
                PrvA1 = 0;
        }
        void GetPrvA1(int x)
        {
                PrvA1 = x;
        }
        void ShowPrvA1()
        {
                cout<<"\nValue of PrvA1 = "<<PrvA1<<endl;
        }
        friend class B;
};
//----------------------Declare class B
class B{
private:
        int PrvB1;
public:
        B(){PrvB1 = 0;}
        void GetPrvB1(int x){PrvB1=PrvA1;}
        void ShowPrvB1(){cout<<"\nValue of PrvB1 = "<<PrvB1<<endl;}
};

int main()
{
        A a1;
        B b1;

        a1.GetPrvA1(30);
        b1.GetPrvB1(50);
        a1.ShowPrvA1();
        b1.ShowPrvB1();

        return 0;
}
