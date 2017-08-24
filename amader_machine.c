
int amader_function(int a, int b);

int biyog_koro(int a, int b)
{
    int ans;
    ans = a-b;
    return ans;
}

int main()
{
    int mmm,mmmm;
    printf("Hello World\n");
    amader_function(200,300);
    mmm=amader_function(500,600);
    printf("%d\n",mmm);

    mmmm = biyog_koro(10,40);
    printf("%d\n",mmmm);
    return 0;
}

int amader_function(int a, int b)
{
    int function_er_kaj;
    function_er_kaj = a*b;
    printf("A = %d\n",a);

    printf("B = %d\n",b);
    return function_er_kaj;

}
