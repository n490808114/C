#include <stdio.h>
void jolly(void);
void deny(void);
void one_three(void);
void two(void);

int main(void)
{
    unsigned long long int n ,i,fibonacci;
    n = 0;
    fibonacci = 1;
    printf("%d\n%d\n",n,fibonacci);
    for(i=0;i<=100;i++)
    {
        fibonacci = n + fibonacci;
        n = fibonacci - n;
        printf("%llu\n",fibonacci);
    }
    /*
    jolly();
    jolly();
    printf("\n");
    jolly();
    printf("\n");
    deny();

    printf("starting now:\n");
    one_three();
    printf("done!");
    */
}

void jolly(void)
{
    printf("For he`s a jolly good fellow!");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}

void one_three(void)
{
    printf("one\n");
    two();
}

void two(void)
{
    printf("two\n");
    printf("three\n");
}