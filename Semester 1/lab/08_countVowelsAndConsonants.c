/*
Write a program to count the number of vowels and consonants in a given string.
*/

#include <stdio.h>
void main()
{
    int vowels = 0, consonants = 0;
    int i, ch, str[500];
    printf("Enter a string: ");
    scanf("%s",str);
    for (i = 0; str[i] != '\0'; i++)
        {
            ch = str[i];
            if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            {
                vowels++;
            }
            else if (ch == ' ')
            {
                continue;
            }
            else
            {
                consonants++;
            }
        printf("\nVowels: %d", vowels);
        printf("\nConsonants: %d", consonants);
     }
 
 

}