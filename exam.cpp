#include<iostream>
using namespace std;

class Prani{
    public: string food="none";
    public: int hand=0;
    public: int leg=0;
    public: int dana=0;
    private: int kidni=10;

    public: Prani(string f,int l, int h, int d, int k){
        food=f;
        hand=h;
        leg =l;
        dana =d;
        kidni=k;
    }


};

int main()
{
//    Prani man;
//    Prani bird;
//
//    man.food = "vat";
//    man.hand = 2;
//    man.leg = 2;
//    man.dana = 0;
//
//    cout<<man.hand<<endl;
//
//    bird.hand = 5;
//
//    cout<<bird.hand<<endl;
//    cout<<man.hand<<endl;
//
//    Prani fish;
//
//    cout<<fish.food<<endl;
//    fish.food="fish";
//    cout<<fish.food<<endl;
//    cout<<fish.kidni<<endl;

    Prani cow = Prani("Grass",2,3,0,2);

    cout<<cow.food<<endl;
    cout<<cow.hand<< endl;
    cout<<cow.leg<<endl;



}
