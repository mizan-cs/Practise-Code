#include<iostream>
using namespace std;

class Box{
        int hight;
        int wight;
public:
        Box(){
                hight=wight=0;
        }
        Box(int h, int w){
                hight=h;
                wight=w;
        }

        Box operator+(int x);
        void Show(){
                cout<<"Hight "<<hight<<" Wight"<<wight<<endl<<endl;
        }
};

Box Box::operator+(int x){
        Box temp;
        temp.hight=hight+x;
        temp.wight=wight+x;

        return temp;
}

int main(){
        Box red(50,70), green;

        green=red+15;

        red.Show();
        green.Show();

        return 0;

}
