    #include<stdio.h>
    #include<math.h>

    int is_prime(int n); // Function declaring , used for checking the number is prime or not
    int main()
    {
        //Variable declaration

        int number, testCaseNumber;
        //Taking Input the number of test case
        scanf("%d",&testCaseNumber);

        //checking Test case's range
        if (testCaseNumber>10){
            return 0;
        }
        //Loop for taking input of test case and process
        while(testCaseNumber--){
            scanf("%d",&number);
            if(is_prime(number)== 0){
                printf("%d is not prime\n",number); // Printing result
            }
            else{
                printf("%d is a prime\n",number); // Printing result
            }
        }
        return 0;
    }

    // Function for check the number is prime or not...

    int is_prime(int n)
    {
        if (n<2){
            return 0;
        } // Only 2 is the smallest prime number
        if(n==2){
            return 1;
        } // 2 is a prime number
        if(n%2==0){
            return 0;
        } // Only 2 is the even prime number
        int i;
        int root;

        root = sqrt(n);

        // Loop for check the number , if it got divine by the odd numbers until it catches it's root value

        for(i=0;i<=root;i=i+2){
            if(n%i==0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
