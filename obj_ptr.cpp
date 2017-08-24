#include<iostream>
#include<string.h>

using namespace std;

class StringLength{
public:
        char *p;
        void Print(void)
        {
                cout<<"\tLength is: "<<strlen(p)<<endl;
        }
        StringLength()
        {
                p=new char[50];
        }
};

int main()
{
        StringLength str1, str2;

        strcpy(str1.p,"String is: Hello How r you?");
        strcpy(str2.p,"String is: I'm not fine.");

        cout<<"Before Assigning:\n";
        str1.Print();
        str2.Print();

        str2=str1;

        cout<<"After Assigning:\n";
        str1.Print();
        str2.Print();

        return 0;

}
