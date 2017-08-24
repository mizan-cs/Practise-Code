#include<iostream>

using namespace std;

class A{
        int PrvA1;

public:
        void GetPrvA1(int x)
        {
                PrvA1=x;
        }
        void ShowPrvA1()
        {
                cout<<"\nValue of PrvA1 = "<<PrvA1<<endl;
        }

        friend class B;
};

//-----------declare class B
class B{
        int PrvB1;

public:
        void GetPrvB1(A a){
                PrvB1=a.PrvA1;
        }
        void ShowPrvB1(){
                cout<<"\nValue of PrvB1 = "<<PrvB1<<endl;
        }
};

int main()
{
        A a1;
        B b1;

        a1.GetPrvA1(30);
        b1.GetPrvB1(a1);

        a1.ShowPrvA1();
        b1.ShowPrvB1();

        return 0;
}
