//Abdoul Raouf Hama Yacouba Issaka
#include <stdio.h>
#include <cs50.h>


int main (void)
{
    long long code;
    int count=0;
    // permettre au user de mettre sa carte de credit

    do
    {
        code= get_long_long("please your card number:");
    }
    while (code<0);
    //declaration de number
    int number=0;

    long long digit1 = code;
    while(digit1>0)
    {
        digit1=digit1/10;

        count++;
    }

    //verifier la condition pour chaque credit card
    if (count!=13 && count!=15 && count!=16)
    {
        printf("your credit card code is not valid\n");
    }
    //doit commencer par le dernier numero
    digit1=number;
    int sum=0;

    for(int i=1; i<=count; i++)
    {
        int digit= digit1%10;
        //pour les places paires
        if (i%2==0)
        {
            //multiply the number by 2
            digit=digit*2;
        }
        //when is an ood position
        if (i%2!=0)
        {
        //not multiply and pass
        digit=digit*1;
        }
        //after 9 like a number
        if(digit>9)
        {
            digit=digit-9;
        }
        //do the sum to all
        sum=sum+digit;
        //divide the number by 10 to make it moving
        digit1=digit/10;

    }
    if(sum%10!=0)
    {
        printf("your card is not valid\n");
    }
    else
    {
        printf("your card is valid\n");
    }
    digit1=number;
    while(digit1>100)
    {
        digit1=digit1/10;
    }
    int thecard= digit1;
    if ((thecard==34 || thecard==37) && (count==15))
    {
        printf("tis card is an Amex card");
    }
    else if ((thecard>50 && thecard<56 ) && (count==16))
    {
        printf("this card is a marster card");
    }
    else if ((thecard/10==4)&&(count==13 || count==16))
    {
        printf("this card is a visa card");
    }
    else
    {
        printf(" but your card came from another bank\n");
    }
}