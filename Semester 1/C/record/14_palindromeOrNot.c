#include <stdio.h>
// #include <conio.h>
#include <string.h>
void main()
{
    char s[20];
    int i, length, temp=0, flag=0;
    // clrscr();
    printf("Enter a string:");
    scanf("%s", s);
    length = strlen(s);

    for(i=0; i<length; i++)
    {
        if(s[i] != s[length-i-1])
        {
            temp = 1;
            break;
        }
    }
    if (temp==0)
    {
        printf("String is a palindrome");
    }
    else
    {
        printf("String is not a palindrome");
    }
   // getch();
} 