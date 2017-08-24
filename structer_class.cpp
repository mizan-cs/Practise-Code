#include<iostream>

using namespace std;

struct A{
        int a1;
        int a2[5];
};

class classA{
private:
        A A1;

public:
        A A2;
        void print_A()
        {
                A1.a1=5;
                A1.a2[0]=11;
                A1.a2[1]=22;
                A1.a2[2]=33;
                A1.a2[3]=44;
                A1.a2[4]=55;

                //print value of Private member
                cout<<"\n\nvalue of A1 in member function: ";
                cout<<"\nA1.a1 = "<<A1.a1;
                cout<<"\nA1.a1[5] = ";
                for(int i=0;i<5;i++){
                        cout<<A1.a2[i]<<",";
                }

                //Printing value of public member
                cout<<"\n\nvalue of A2 from main function: ";
                cout<<"\nA2.a1 = "<<A2.a1;
                cout<<"\nA2.a2[5] = ";
                for(int i=0;i<5;i++){
                        cout<<A2.a2[i]<<",";
                }
        }

};

int main()
{
        classA a1;
        cout<<"\nEnter Value of A2.a1: ";
        cin>>a1.A2.a1;

        cout<<"\nEnter five value of A2.a2: ";
        for(int i=0;i<5;i++){
                cin>>a1.A2.a2[i];
        }

        a1.print_A();

        return 0;
}
