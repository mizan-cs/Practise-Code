#include<stdio.h>
int main()
{
        int taka,pak;
        scanf("%d",&taka);

        pak=100;
        while(taka<=pak){
                printf("%d Pak\n",pak);
                pak--;
        }

        return 0;
}
