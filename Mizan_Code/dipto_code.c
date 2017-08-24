#include<stdio.h>
#include<math.h>

int main()

{int a,b,c,d,e,f,g,h,i,j;
scanf("%d %d %d",&a,&b,&c);
d=a+b+c;
e=d/2;
f=e-a;
g=e-b;
h=e-c;
i=e*f*g*h;
j= sqrt(i);
printf("%d",j);
return 0;
}
