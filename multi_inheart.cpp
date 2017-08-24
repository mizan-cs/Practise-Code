#include<iostream>
using namespace std;

class A{
protected:
        int i;
};
class B:virtual public A{
        //code goes here
};
class C:virtual public A{
        //code goes here
};
class D:public B,public C{
public:
        void ShowVal(){
                i=10;
                cout<<i<<endl;
        }
};

int main(){
        D d1;
        d1.ShowVal();

        return 0;
}
