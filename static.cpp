#include<iostream>
using namespace std;

class Sample{
public:
        static int TotObj;
        static void printInfo()
        {
                cout<<"\nTotal Object: "<<TotObj<<"\n";
        }
};

int Sample::TotObj = 0; //Define static variable

int main()
{
      Sample::TotObj = 10;
      Sample::printInfo();
      return 0;
}
