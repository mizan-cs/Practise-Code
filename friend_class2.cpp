#include<iostream>
using namespace std;

class mizan{
private:
        int hight;
        int wight;

public:

        int sum_of_hw(int x, int y){
                wight=x;
                hight=y;

                return x*y;
        }

        friend class mim;

};

class mim{
private:
        int hight;
        int wight;

public:
        int sum_of_hw(mizan mobj){
                hight=mobj.hight;
                wight=mobj.wight;

                return hight*wight;
        }
};


int main()
{
        mizan mobj1;
        mim mobj2;


        cout<<"Sum from mizan class: "<<mobj1.sum_of_hw(12,6)<<endl;

        cout<<"Sum from mim class: "<<mobj2.sum_of_hw(mobj1)<<endl;

        return 0;
}
