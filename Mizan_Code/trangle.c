#include<stdio.h>
#include<math.h>

int main()
{
        int i,t;
        float  a,b,c,s,area;
        scanf("%d",&t);

        for(i=1;i<=t;i++){
                scanf("%f %f %f",&a,&b,&c);

                if((a+b)>c && (b+c)>a && (a+c)>b){
                        s=(a+b+c)/2;
                        area=sqrt(s*(s-a)*(s-b)*(s-c));
                        printf("case %d: %f\n",i,area);
                }
                else{
                        printf("Case %d: 0\n",i);
                }
        }

        return 0;

}
