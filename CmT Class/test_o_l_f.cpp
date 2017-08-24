#include<iostream>

using namespace std;

class Sample{
        int hight,wight;

public:
        Sample()
        {
                hight=wight=0;
        }
        Sample(int h, int w)
        {
                hight = h;
                wight=w;
        }

        Sample operator+(int x);

        void show()
        {
                cout<<"Hight : "<<hight<<"\twight"<<wight<<endl;
        }
};

Sample Sample::operator+(int x)
{
        Sample temp;

        temp.hight=hight+x;
        temp.wight=wight+x;

        return temp;
}

int main()
{
        Sample smp1(50,75),smp2;

        int n;

        cin>>n;
        smp2 = smp1+n;

        smp1.show();
        cout<<"\n";
        smp2.show();

        return 0;
}
