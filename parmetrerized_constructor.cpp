#include<iostream>

using namespace std;

class Sample{
private:
        int x,y;
public:
        Sample(int a,int b);
        ~Sample(){cout<<"\n\ndestructor Called";}
};

Sample::Sample(int a, int b)
{
        cout<<"This is a Contractor Function\n ";
        cout<<"Sum of a & b is :"<<a+b<<endl;
}

int main()
{
        Sample smp(3,5);

        return 0;
}
