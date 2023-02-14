#include <stdio.h>
void main()
{
  int limit, i, j;
  printf("Enter the limit: ");
  scanf("%d", &limit);
  printf("Prime numbers up to %d are:\n", limit);
  
  //i Is The Counter Variable
  for (i = 2; i <= limit; i++)
   {
    //Assume i Is Prime
    int prime = 1;
    for (j = 2; j < i; j++)
        {
         if (i % j == 0)
           {
            prime = 0;
            break;
           }
        }

    if (prime)
        {
         printf("%d\n", i);
        }
   }
}

/*
Algorithm:

Step 1: Start
Step 2: Declare limit,i ,j as integers
Step 3: Print "Enter the limit: "
Step 4: Scan limit
Step 5: Print "Prime Numbers are: "
Step 6: Start a for loop with condition (i=2; i<=limit: i++)
Step 7: Inside the for loop, define variable prime=1
Step 8: Start another for loop with condition (j=2; j<i;  j++)
Step 9: Inside the inner for loop, check if i is divisible by j using if statement
Step 10: If yes, set prime variable to 0 and break the inner loop
Step 11: After the inner for loop, check if is_prime is still equal to 1 using if statement
Step 12: If prime is still equal to 1, then print the value of i
Step 13: End the inner for loop
Step 14: End the outer for loop
Step 15: Stop
*/


/*
Explanation:

>In the main function, we ask the user for the limit, then use a for loop to iterate from 2 to the limit.
>For each number i, we set a variable prime to 1, assuming that the number is prime.
>Then, we use another for loop to iterate from 2 to i-1, checking if i is divisible by any of the numbers in the range. If it is, we set prime to 0 and break out of the inner loop.
>Finally, if prime is still 1 after the inner loop, we print the number i, since it is a prime number.
*/