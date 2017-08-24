#include<iostream>
using namespace std;


class Rect{
        int lenght,wight;
public:
        Rect(){
                lenght=wight=0;
        }
        Rect(int len, int wig);
        Rect operator+ (int p);
        Rect operator- (int p);
        Rect operator- (Rect r);
        Rect operator++();
        Rect operator+= (Rect op);

        void Show(){
                cout<<"Length: "<<lenght<<" Wight: "<<wight<<endl;
        }
        void SetLen(int l){
                lenght=l;
        }
        void SetWight(int w){
                wight=w;
        }
        int GetLen(){
                return lenght;
        }
        int GetWight(){
                return wight;
        }

        virtual ~Rect(){};
};
///-------------------------------
Rect::Rect(int len, int wig){
        lenght=len;
        wight=wig;
}
///--------------------------------
Rect Rect::operator+(int p){
        Rect temp;
        temp.SetLen(p+lenght);
        temp.SetWight(p+wight);

        return temp;
}

///-----------------------------------

Rect Rect::operator-(int p){
        Rect temp;
        temp.SetLen(lenght-p);
        temp.SetWight(wight-p);

        return temp;
}

///----------------------------------------

Rect Rect::operator-(Rect r){
        lenght-=r.GetLen();
        wight-=r.GetWight();

        return (*this);
}

///-----------------------------------------

Rect Rect::operator++(){
        lenght++;
        wight++;

        return *this;
}

///--------------------------------------------

int main(){
        Rect a(20,10),b,c;

        cout<<"At the begining, In Object a"<<endl;
        a.Show();

        b=a+25;///operator +
        cout<<"\nAfter b = a+25, In Object b"<<endl;
        b.Show();

        b=b-a; ///Operator -(Rect r)
        cout<<"After b = b-a, In Object b"<<endl;
        b.Show();

        c=b-5; ///operator call
        cout<<"After c = b-5, In Object c"<<endl;
        c.Show();

        ///c++;
       /// cout<<"After C++,In Object c"<<endl;
        ///c.Show();

        /*a+=c;
        cout<<"After a+=c, In Object a"<<endl;
        a.Show();*/

        return 0;
}

