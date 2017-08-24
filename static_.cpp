#include<iostream>
using namespace std;

class Sample{
        static int TotObj;

public:
        Sample()
        {
                TotObj++;
              //  cout<<"Cons call\n";
        }
       /* ~Sample()
        {
                TotObj--;
                cout<<"destr call\n";
        }*/

        static void PrintInfo()
        {
                cout<<"\nTotal Object: "<<TotObj<<endl;
        }
};

int Sample::TotObj = 0;


int main()
{
        Sample s1,s2,s3,s4,s5;

        Sample::PrintInfo();

        return 0;
}
