/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x = 1;
    int soma;
    
    while (x != 0){
        printf ("Digite um número: ");
        scanf ("%d", &x);
        soma = x + soma;
    }
    
    
    printf ("Soma total: %d\n", soma);
    

    return 0;
}
