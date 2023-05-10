#include <stdio.h>
void main()
{
    int fan = 0, ac = 0, tv = 0;
    printf("Price of a FAN = 2000 /-\nPrice of a AC = 25000 /-\nPrice of a TV = 10000 /-\n");
    printf("Number of FAN: ");
    scanf("%d",&fan);
    float fan_price = 2000 * fan;
    printf("Number of AC: ");
    scanf("%d",&ac);
    float ac_price = 25000 * ac;
    printf("Number of TV: ");
    scanf("%d",&tv);
    float tv_price = 10000 * tv;

    if (fan > 0)
    {
        if (fan < 20)
        {
            printf("\nTotal price of FANs: %.2f /-", fan_price);
        }
        else if (fan >= 20)
        {   
            fan_price *= 0.88;
            printf("\nTotal discounted price of FANs: %.2f /-", fan_price);
        }
    }

    if (ac > 0)
    {
        if (ac < 10)
        {
            printf("\nTotal price of ACs: %.2f /-", ac_price);
        }
        else if (ac >= 10)
        {
            ac_price *= 0.85;
            printf("\nTotal discounted price of ACs: %.2f /-", ac_price);
        }
    }

    if (tv > 5)
    {
        printf("\nTotal price of TVs: %.2f /-", tv_price);
    }
    else if (tv >= 5)
    {
        tv_price *= 0.92;
        printf("\nTotal discounted price of TVs: %.2f /-", tv_price);
    }

    printf("\nGrand Total: %.2f /-", fan_price + ac_price + tv_price);
}