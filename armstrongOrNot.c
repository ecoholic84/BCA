#include <stdio.h>
#include <math.h>

void main()
{
    int num, originalNum, rem, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0)
    {
        rem = originalNum % 10;
        result += pow(rem, n);
        originalNum /= 10;
    }

    if (result == num)
        {
        printf("%d is an Armstrong number.", num);
        }
    else
        {
        printf("%d is not an Armstrong number.", num);
        }
}

/*
The program first gets an integer input from the user and stores it in the num variable. Then, it calculates the number of digits in num by continuously dividing it by 10 until it becomes 0. The value of n will be the number of digits.

Next, the program calculates the sum of the power of each digit, raised to the power of n, by repeatedly taking the remainder of the originalNum divided by 10 and adding it to result.

Finally, the program checks if the calculated result is equal to the original num. If they are equal, then the number is an Armstrong number and the program outputs "num is an Armstrong number." Otherwise, it outputs "num is not an Armstrong number."
*/