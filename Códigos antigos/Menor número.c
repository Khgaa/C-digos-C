/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    int y;
    int menor = 99999999999999999999999999999999999999999999999999999999999999999999999999999999;
    
    printf ("Digite um valor para x: ");
    scanf ("%d", &x);
    printf ("Digite um valor para y: ");
    scanf ("%d", &y);
    
    if (x < y){
        menor = x;
    }
    else
        menor = y;
    
    printf ("O menor numero é: %d\n", menor);
    

    return 0;
}
