#include<stdio.h>
#include<math.h>

int main()

{
	int c,t;
	float a,x[2],y[2],r;
	scanf("%d",&t);
	for(c=1;c<=t;c++){
	scanf("%f %f %f %f %f",&x[0],&y[0],&x[1],&y[1],&r);
	a=sqrt((x[0]-x[1])+(y[0]-y[1]));
	if(r<a){
	printf("case %d:yes",c);}
	else{
	printf("case %d:no",c);}
}
return 0;
}
