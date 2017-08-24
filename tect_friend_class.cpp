#include<iostream>

using namespace std;

class mizan{
private:
        int mizan_value;
public:
        mizan(){mizan_value=0;}
        void Get_Mizan_value(int x)
        {
                mizan_value=x;
        }

        friend class mim;
};
//====================

class mim{
private:
        int mim_value;
public:
        mim(){mim_value=0;}
        void Get_mim_value(mizan &m)
        {
                mim_value =m.mizan_value+10;
                m.mizan_value = 64446;
        }
        void show_mim_value(mizan m)
        {
                cout<<"\nValue of Mizan_value is "<<m.mizan_value<<endl;
                cout<<"\nValue of Mim_value is "<<mim_value<<endl;
        }
};

int main()
{
        mizan m1;
        mim m2;

        m1.Get_Mizan_value(10);
        m2.Get_mim_value(m1);
        m2.show_mim_value(m1);

        return 0;
}
