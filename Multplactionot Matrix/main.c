#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5],b[5][5],c[5][5];
    int i,j,k,sum=0;
    int m,n,o,p;

    printf("Enter the row and colomn of first matrix ");
    scanf("%d %d",&o,&p);

    printf("Enter the row and coloumn 2nd Matrix ");
    scanf("%d %d",&m,&n);

    if(n!=o){
        printf("Multi of two Matrix are not possible");
    }

    else{
        printf("The first matrix value are ");
        for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);

        printf("The 2nd Matrix value are ");
        for(i=0;i<o;i++)
                for(j=0;j<p;j++)
                scanf("%d",&b[i][j]);

        printf("\nThe First Matrix value is \n");
        for(i=0;i<m;i++)
                printf("\n");
        for(j=0;j<n;j++)
                printf("%d",a[i][j]);

        printf("\nThe Second Matrix is \n");
        for(i=0;i<o;i++)
                printf("\n");
        for(j=0;j<p;j++)
        {
                printf("%d",b[i][j]);
        }

        for(i=0;i<m;i++)
                for(j=0;j<p;j++)
                c[i][j]=0;
        for(i=0;i<m;i++){
                for(j=0;j<p;j++){
                        sum=0;
                        for(k=0;k<n;k++)
                                sum=sum+a[i][k]*b[k][j];
                        c[i][j]=sum;
                }
        }

        printf("\nAfter Multi of Two matrix ");
        for(i=0;i<m;i++){
                printf("\n");
                for(j=0;j<p;j++){
                        printf("%d",c[i][j]);
                }
        }
    }
    return 0;
}
