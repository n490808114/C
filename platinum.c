#include <stdio.h>

int main(void)
{
    float weight;
    float value;
    char str0;

    printf("Are you worth your weight in platunum?\n");
    printf("Let`s check it out.\n");
    printf("Please enter you weight in pounds: ");
    scanf("%f",& weight);
    scanf("%s",& str0);
    value = 1700.0 *weight *14.5833;
    printf("%.2f\n%s\n",weight,str0);
    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("You are easily worth that! If platinum prices drop.\n");
    printf("eat more to maintain your value.\n");

    return 0;
}