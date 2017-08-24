/* Quiz Game Presentation Prepared By Group Passionate Programmers For Subject CSE-124 */

#include<stdio.h>

int main()

{
    char e[10];
    int point=0,right=0;

    system("COLOR F0");
    printf("\n\n\t\t\t\tWELLCOME !!!\n\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\tThis Is A Quiz Game !!!\n\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\t1)You Have To Answer 10 Question .\n\t2)For Each Correct Answer You Will Get 5 Points\n");
    printf("\t3)for Each Wrong Answer 5 points will be deducted from your total points ");
	printf("------------------------------------------------------------------------------\n");
    printf("\n\n\tWish You GOOD Luck");
    printf("\n\n\tPress Enter To Proceed");

    getch();  //To Stop Procedure Until Next Command from keyboard
    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 1\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 1) WWW stands for  ?\n\n"); //Question 1
    printf("\n\tA)World Whole Web\t\t\tB)Wide World Web");
    printf("\n\tC)Web World Wide\t\t\tD)World Wide Web\n\n\t\t");

    scanf("%c",&e[0]);
    fflush(stdin);

    if (e[0]=='D'||e[0]=='d')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC");  //To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score");
        point=point-5;
    	getch();
    }

    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 2\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 2) Which of the following are components of Central Processing Unit (CPU) ?\n\n"); //Question 2
    printf("\n\tA)Arithmetic logic unit, Mouse\tB)Arithmetic logic unit, Control unit");
    printf("\n\tC)Arithmetic logic unit, Integrated Circuits\tD)Control Unit, Monitor\n\n\t\t");
    scanf("%c",&e[1]);
    fflush(stdin);

    if (e[1]=='B'||e[1]=='b')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC"); // To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score.\n",point);
        point-=5;
        getch();
    }

    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 3\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 3) Which among following first generation of computers had ?\n\n"); //Question 3
    printf("\n\tA)Vaccum Tubes and Magnetic Drum\t\t\tB)Integrated Circuits");
    printf("\n\tC)Magnetic Tape and Transistors\t\t\tD)All of above\n\n\t\t");

    scanf("%c",&e[2]);
    fflush(stdin);

    if(e[2]=='A'||e[2]=='a')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC"); // To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score");
        point-=5;
        getch();
    }

    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 4\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 4) Where is RAM located ?\n\n"); //Question 4
    printf("\n\tA)Expansion Board\t\t\tB)External Drive");
    printf("\n\tC)Mother Board\t\t\tD)All of above\n\n\t\t");

    scanf("%c",&e[3]);
    fflush(stdin);

    if(e[3]=='C'||e[3]=='c')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC"); // To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score");
        point-=5;
        getch();
    }

    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 5\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 5)If a computer has more than one processor then it is known as ?\n\n"); //Question 5
    printf("\n\tA)Uniprocess\t\t\tB)Multiprocessor");
    printf("\n\tC)Multithreaded\t\t\tD)Multiprogramming\n\n\t\t");

    scanf("%c",&e[4]);
    fflush(stdin);

    if(e[4]=='B'||e[4]=='b')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC"); // To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score");
        point-=5;
        getch();
    }

    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 6\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 6) If a computer provides database services to other, then it will be known as ?\n\n"); //Question 6
    printf("\n\tA)Web server\t\t\tB)Application server");
    printf("\n\tC)Database server\t\t\tD)FTP server\n\n\t\t");

    scanf("%c",&e[5]);
    fflush(stdin);

    if(e[5]=='C'||e[5]=='c')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC"); // To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score");
        point-=5;
        getch();
    }

    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 7\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 7) Full form of URL is ?\n\n"); //Question 7
    printf("\n\tA)Uniform Resource Locator\t\t\tB)Uniform Resource Link");
    printf("\n\tC)Uniform Registered Link\t\t\tD)Unified Resource Link\n\n\t\t");

    scanf("%c",&e[6]);
    fflush(stdin);

    if(e[6]=='A'||e[6]=='a')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC"); // To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score");
        point-=5;
        getch();
    }

    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 8\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 8) In which of the following form, data is stored in computer ?\n\n"); //Question 8
    printf("\n\tA)Decimal\t\t\tB)Binary");
    printf("\n\tC)HexaDecimal\t\t\tD)Octal\n\n\t\t");

    scanf("%c",&e[7]);
    fflush(stdin);

    if(e[7]=='B'||e[7]=='b')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC"); // To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score");
        point-=5;
        getch();
    }

    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 9\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 9)Technology used to provide internet by transmitting data over wires of telephone network is ?\n\n"); //Question 1
    printf("\n\tA)Transmitter\t\t\tB)Diodes");
    printf("\n\tC)HHL\t\t\tD)DSL\n\n\t\t");

    scanf("%c",&e[8]);
    fflush(stdin);

    if(e[8]=='D'||e[8]=='d')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC"); // To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score");
        point-=5;
        getch();
    }

    system("cls"); // To Clean Screen
    system("COLOR F2"); // To Change Color of Console and Font

    printf("\n\n\t\t\tQuestion 10\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\n\t\t 10) Which level language is Assembly Language ?\n\n"); //Question 10
    printf("\n\tA)high-level programming language\t\t\tB)medium-level programming language");
    printf("\n\tC)low-level programming language\t\t\tD)machine language\n\n\t\t");

    scanf("%c",&e[9]);
    fflush(stdin);

    if(e[9]=='C'||e[9]=='c')
    {
        system("cls"); // To Clean Screen
        system("COLOR F2"); // To Change Color of Console and Font
        printf("Your Answer Is Correct !!!\n You Got 5 Points");
        point+=5;
        right+=1;
        getch();
    }
    else
    {
        system("cls"); // To Clean Screen
        system("COLOR FC"); // To Change Color of Console and Font
        printf("\n\n\t\tYour Answer Is Wrong !!! \n 5 Points Have Deducted From Your Total Score");
        point-=5;
        getch();
    }


    system("cls"); // To Clean Screen

    system("COLOR F0"); // To Change Color of Console and Font
    printf("You Have Given %d Correct Answer . ",right);
    printf("\n\nYour Final Score Is = %d\n",point);


//    /*Answers:-
//
//               Q 1 : D
//               Q 2 : B
//               Q 3 : A
//               Q 4 : C
//               Q 5 : B
//               Q 6 : C
//               Q 7 : A
//               Q 8 : B
//               Q 9 : D
//               Q10 : C                */
//
    system("COLOR F2"); // To Change Color of Console and Font
    printf("------------------------------------------------------------------------------\n");
    printf("The Programme Is Prepared As Presentation Report Of CSE-124\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\t\t\tSubmited To\n");
    printf("\t\t\tFariha Tasnim Jaigirdar\n\t\t\tDept. of CSE\n");
    printf("------------------------------------------------------------------------------\n");
    printf("\t\t\tSubmited By\n");
    printf("\t\t Group  \'Passionate Programmers\'\n");
    printf("\eName         \t\t\t\t --- Student ID\n");
    printf("\eMD.Sad Adnan \t\t\t\t --- 162-15-7814 \n");
    printf("\eQ.Z.B Hasan  \t\t\t\t --- 162-15-7695 \n");
    printf("\eSusmita Karmakar \t\t\t --- 162-15-7721\n");
    printf("\eJarin Tabassum   \t\t\t --- 162-15-7702\n");
    printf("\eSarzina Sraboni  \t\t\t --- 162-15-7701\n");
    printf("------------------------------------------------------------------------------\n");
    printf("Submition Date : 10/12/16\n");
    printf("------------------------------------------------------------------------------\n");
    getch();
    return 0;
    }



