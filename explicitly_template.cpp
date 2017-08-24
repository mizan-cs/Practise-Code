#include<iostream>
#include<string.h>
using namespace std;

template<class DataType> DataType MinValue(DataType a, DataType b)
{
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

//------function specialization-------
char* MinValue(char *str1, char *str2)
{
    if(strcmp(str1,str2)>0){
        return str2;
    }
    else{
        return str1;
    }
}

int main()
{
    cout<<"MinValue(50,5)  =="<<MinValue(50,5)<<endl;
    cout<<"MinValue(0.998,0.997)  =="<<MinValue(0.998,0.997)<<endl;
    cout<<"MinValue(\'N\',\'n\')  =="<<MinValue('N','n')<<endl;

    //---------specialized-----------------
    cout<<"MinValue(\"Mizan\",\"Roni\")  =="<<MinValue("Mizan","Roni")<<endl;
    return 0;
}
