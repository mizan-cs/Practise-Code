/*Game of One*/
#include<stdio.h>
#include<math.h>
int main()
{
        int t,n,c,j,k;

        double i;

        printf("Test Case Plz?...");
        scanf("%d",&t);

        while(t--){
                c=0;
                scanf("%d",&n);

                for(i=pow(2,(n-1));i<pow(2,n);i++){
                        j=i;

                        while(j>0){
                                k=j%2;
                                j=j/2;
                                if(k==1)
                                c++;
                        }
                }
                printf("%lf %d\n",pow(2,(n-1)),c);
        }

        return 0;
}
