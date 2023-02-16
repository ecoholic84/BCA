#include <stdio.h>
// #include <conio.h>

void main()
{
    int a,b,c,choice;
    // clrscr();
    printf("MENU \n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("5. Reminder \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\nEnter two values: ");
    scanf("%d%d", &a, &b);
    
    switch (choice) 
    {
    case 1:
        c=a+b;
        printf("The sum is: %d\n",c);
        break;
    case 2:
        c=a-b;
        printf("The difference is: %d\n",c);
        break;
    case 3:
        c=a*b;
        printf("The product is: %d\n",c);
        break;
    case 4:
        c=a/b;
        printf("The quotient is: %d\n",c);
        break;
    case 5:
        c=a%b;
        printf("The reminder is: %d\n",c);
        break;
    default:
        printf("\nInvalid choice.\a");
    }
   // getch();
}

/*
Algorithm:

Step 1: Start
Step 2: Declare variables a,b,c,choice
Step 3: Print menu including addition, subtraction, multiplication, division and reminder
Step 4: Read a and b
Step 5: Read choice
Step 6: Check choice
Step 7: case 1: c=a+b
                print c
        case 2: c=a-b
                print c
        case 3: c=a*b
                print c
        case 4: c=a/b
                print c
        case 5: c=a%b
                print c
        default: print invalid choice
Step 8: Stop
*/