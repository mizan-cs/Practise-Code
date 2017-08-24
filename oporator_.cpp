#include<iostream>
using namespace std;
class box{
        int hight, wight;
public:
        box(){
                hight=wight=0;
        }
        box(int h, int w){
                hight=h;
                wight=w;
        }

        void Show(){
                cout<<"Hight: "<<hight;
                cout<<"Wight: "<<wight<<endl;
        }

        box operator+(int x);
};

box box::operator+(int x){
        box temp;
        temp.hight=hight+x;
        temp.wight=wight+x;

        return temp;
}

int main(){
        box red(50,75),green;

        green=red+15;

        red.Show();
        green.Show();

        return 0;
}
