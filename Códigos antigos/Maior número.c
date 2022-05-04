/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    int n = 1;
    int qnt;
    int maior = 0;
    
    printf ("Digite a quantidade de números que você quer escrever: ");
    scanf ("%d", &qnt);
    
    while (n <= qnt){
        printf ("Digite um número: ");
        scanf ("%d", &x);
        n++;
        if (x > maior){
            maior = x;
        }
    }
    
    printf ("O maior número lido foi: %d\n", maior);
    
    return 0;
}