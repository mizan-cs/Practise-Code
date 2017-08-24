#include<stdio.h>
#include<time.h>

void delay(unsigned int mseconds){
        time_t goal=mseconds+clock();

        while(goal>clock());
}

int main(){

        int i;

        for(i=0;i<3;i++){
                delay(1000);
                system("cls");
                printf("\n\n\n\n\n\n\t\t\t%d\a",i+1);
        }
        delay(1000);
        printf("\nLet's GOOOOOO!!!!\n\n\n\n\n\a\a\a\a\a\a\a\a\a\a");

        return 0;
}
