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
    int q = 1;
    int pot = 1;
    
    printf ("Digite a base: ");
    scanf ("%d", &x);
    printf ("Digite o expoente: ");
    scanf ("%d", &y);
    
    
    if (y > 1){
        pot = pow(x, y);
        printf ("O resultado é: %d\n", pot);
    }
    else
       printf ("O comando foi um fracasso, motivo: o expoente precisa ser maior que um");
    

    return 0;
}
