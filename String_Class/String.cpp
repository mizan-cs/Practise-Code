#include<iostream>
#include<string.h>
using namespace std;

class String{
        void concat(int NewLen);
        int maxlen, lenght;
        char *str;
public:
        int Getlen();
        char *GetString();
        void ShowString();
        void CCat(String &o); ///overloaded CCat
        void CCat(char *s); ///overloaded CCat
        String(const char *s); ///Overloaded constructor
        String(int len=127); ///Overloaded Constructor
        virtual ~String(); ///Virtual destructor
};
///------------------------------------------

String::String(const char *s){
        int len=0;
        while(*(s+len)){
                len++;
        }

        str=new char[len+1];

        for(int i=0;i<len;i++){
                *(str+i)=*s++;
        }

        *(str+len)=NULL;

        lenght=maxlen=len;
}

///----------Overloaded String----------------

String::String(int len){
        str=new char[len+1];

        int i=0;
        *str=NULL;
        lenght=0;
        maxlen=len;
}

///------------concat---------------------

void String::concat(int NewLen){
        char *tstr=new char[NewLen+1];
        int i=0;

        while(str[i]){
                tstr[i]=str[i++];
        }

        tstr[i]=NULL;
        delete [] str;
        maxlen=NewLen;
}

///-----------------Overloaded CCat()----------------

void String::CCat(char *s){
        int len=0;
        while(*(str+len)){
                len++;
        }

        if((lenght+len)>=maxlen){
                concat(lenght+len);
        }

        while(*s){
                str[lenght++]=*s++;
        }

        str[lenght] = NULL;
}

///Overloaded CCat()------------------

void String::CCat(String &o){
        if(lenght+o.Getlen()>=maxlen){
                concat(lenght+o.Getlen());
        }

        char *s=o.GetString();

        while(*s){
                str[lenght++]=*s++;
        }

        str[lenght]=NULL;
}

///-----------------ShowString()-------------------

void String::ShowString(){
        if(lenght==0){
                cout<<"No String is in this Object"<<endl;
        }
        else{
                cout<<str<<endl;
                cout<<"String Length:"<<lenght<<endl;
                cout<<"Maximum Capacity:"<<maxlen<<endl;
        }
}

///-----------------GetString()--------------

char* String::GetString(){
        return str;
}

///------------------Getlen()-------------

int String::Getlen(){
        return lenght;
}

///------------------Destructor-----------

String::~String(){
        delete [] str;
}

///\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\///

///-------------main()-----------------------

int main(){
        ///char *name;
        ///cin>>name;
        String a("Bikash");

        a.ShowString();


        return 0;
}
