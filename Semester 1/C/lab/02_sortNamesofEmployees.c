/*
Write a C program to alphabetically sort the names of n employees working in an organization.
The output should be in ascending/descending order based on the users response.
*/

#include <stdio.h>
#include <string.h>

void main()
{
    const int max_e = 100;
    const int max_name_l = 100;

    int n, i, j;
    char names[max_e][max_name_l], temp[max_name_l], choice;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    printf("Enter the names of the employees:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
        if (strlen(names[i]) > max_name_l)
        {
            printf("Error: maximum name length exceeded.\n");
        }
    }

    printf("Do you want to sort in ascending or descending order? (A/D): ");
    scanf(" %c", &choice);

    if (choice == 'A' || choice == 'a')
    {
        // sort in ascending order
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(names[i], names[j]) > 0)
                {
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            }
        }
    }  
    
    else if (choice == 'D' || choice == 'd')
        {
        // sort in descending order
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(names[i], names[j]) < 0)
                {
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            }
        }
    }
        else 
        {
        printf("Invalid choice.");
        }

    printf("Sorted names of the employees:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }
}