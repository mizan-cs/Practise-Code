#include<iostream>
#include<string.h>
using namespace std;

class Student{
private:
        char *name;
        char *id;

public:
        void GetInfo(char *name, char *id){
                strcpy(this name, name);
                strcpy(this id,id);
        }
        void ShowInfo(){
                cout<<"Name:\t"<<name;<<endl;
                cout<<"ID:\t"<<id<<endl;
        }
};
class BestStudent:public Student{
private:
        int roll;
        float gpa;
public:
        void GetBestInfo(int roll, float gpa):GetInfo(name,id){
                this roll=roll;
                this gpa=gpa;
        }
        void ShowBestInfo():ShowInfo(name,id){
                cout<<"Roll:\t"<<roll<<endl;
                cout<<"GPA:\t"<<gpa<<endl;
        }
};

int main(){
        Student tanvir;

}
