#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,N,total_a=0,total_b=0,total_c,total_d;
    scanf("%d",&N);
    int matrix[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",matrix[i][j]);
        }
    }
    for(k=0;k<N;k++)
    {
        total_a=total_a+matrix[k][k];
    }
    while(N--)
    {
        total_b=total_b+matrix[N][N];
    }
    total_c=total_a-total_b;
    total_d=total_b-total_a;
    if(total_c>=total_d)
    {
        printf("%d/n",total_c);
    }
    if(total_d>total_c)
    {
        printf("%d/n",total_d);
    }
    return 0;
}
