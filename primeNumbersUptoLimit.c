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
    int is_prime = 1;
    for (j = 2; j < i; j++)
        {
         if (i % j == 0)
           {
            is_prime = 0;
            break;
           }
        }

    if (is_prime)
        {
         printf("%d\n", i);
        }
   }
}

/*
NOTE

In the main function, we ask the user for the limit, then use a for loop to iterate from 2 to the limit.
For each number i, we set a variable is_prime to 1, assuming that the number is prime.
Then, we use another for loop to iterate from 2 to i-1, checking if i is divisible by any of the numbers in the range. If it is, we set is_prime to 0 and break out of the inner loop.
Finally, if is_prime is still 1 after the inner loop, we print the number i, since it is a prime number.*/