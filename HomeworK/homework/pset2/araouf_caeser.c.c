//Abdoul Raouf Hama Yacouba Issaka
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

    //les commandes pour que sa marche et declarations des variable
int main (int argc, string argv[])
{
    if (argc==2)
    {
    string p;


    //the key
    int k=atoi(argv[1]);

    //get the plaintex
    p=get_string("your text you want to hidden:");

     //exportation de Ascii a alphabetical index
     printf("cipher text is:");
     for(int i=0; i<strlen(p); i++)
     if(isalpha(p[i]))
     {
         if(islower(p[i]))
         {
             //la formule 1e si c'est lower
             printf("%c",(((p[i]-97)+k)%26)+97);

         }
         // la formule 2 si c'est upper
         if(isupper(p[i]))
         {
             printf("%c",(((p[i]-65)+k)%26)+65);
         }
     }else
        {
            printf("%c",p[i]);
        }
        printf("\n");
    }
    return 0;

}