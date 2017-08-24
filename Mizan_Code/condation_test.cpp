#include<iostream>
using namespace std;

int main()
{
      int total_time=0,up_down=4;
        int my_position,lift_position;
        cin>>my_position>>lift_position;

        while(my_position!=lift_position){
            cout<<"1"<<endl;
            lift_position--;
        }
        /*if(lift_position<my_position){
                while(lift_position>=my_position){
                total_time+=up_down;
            }
        }
        else{
                while(lift_position<=my_position){
                total_time+=up_down;
            }
        }*/
        //cout<<"Total Time "<<total_time<<endl;
}
