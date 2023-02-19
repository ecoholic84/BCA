#include <stdio.h>
// #include <conio.h>
void main()
{
    int i=0, j=0;
    char str1[50], str2[50];
    // clrscr();
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    while (str1[i] != '\0')
    {
        i++;
    }
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0';
    printf("Concatenated string is: %s", str1);
    // getch();
}