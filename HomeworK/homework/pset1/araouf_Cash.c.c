//Abdoul Raouf Hama Yacouba Issaka
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int a=500;
    int b=250;
    int c=200;
    int d=100;
    int e=50;
    int f=25;
    int g=10;
    int h=5;
    int i=1;
    int n;
    int coins=0;
    do
    {
        n=get_int ("the exchange you want:");
    }
    while(n<1);

    while(n>=a)
    {
        n=n-a;
        coins++;
    }

    while(n>=b)
    {
        n=n-b;
        coins++;
    }

    while(n>=c)
    {
        n=n-c;
        coins++;
    }

    while(n>=d)
    {
        n=n-d;
        coins++;
    }

    while(n>=e)
    {
        n=n-f;
        coins++;
    }

    while(n>=g)
    {
        n=n-g;
        coins++;
    }

    while(n>=h)
    {
        n=n-h;
        coins++;
    }

    while(n>=i)
    {
        n=n-i;
        coins++;
    }

    printf("the number of coins is: %i \n", coins);
}

