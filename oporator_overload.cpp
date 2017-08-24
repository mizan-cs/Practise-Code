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
        void Show();
        Box operator+(int m);
        Box operator++();
};

void Box::Show(){
        cout<<"Hight="<<hight<<" Wight="<<wight<<endl;
}

Box Box::operator+(int m){
        Box temp;
        temp.hight=hight+m;
        temp.wight=wight+m;

        return temp;
}

Box Box::operator++(){
        hight++;
        wight++;

        return (*this);
}

int main(){
        Box red(10,20), black;

        black=red+5;

        black.Show();

        ++red;
        red.Show();

        return 0;

}

