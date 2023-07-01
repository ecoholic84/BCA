#include <stdio.h>
// #include <conio.h>
#include <string.h>
void main()
{
    int i,j,count;
    char str[25][25], temp[25];
    // clrscr();
    puts("How many string ?");
    scanf("%d",&count);

    puts("Enter string one by one.\n");
    for(i=0; i<=count; i++)
    {
        gets(str[i]);
    }
    for(i=0; i<=count-1; i++)
    {
        for(j=i+1; j<=count; j++)
        {
            if(strcmp(str[i],str[j]) > 0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nSorted strings:");
    for(i=0; i<=count; i++)
    {
        puts(str[i]);
    }
  // getch();
}