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
    int intervalo;
    
    printf ("Digite o primeiro número: ");
    scanf ("%d", &x);
    
    printf ("Digite o segundo número: ");
    scanf ("%d", &y);
    
    if (x > y){
        intervalo = y;
        while (intervalo <= x){
            if (intervalo % 2 != 0){
                printf ("%d\n", intervalo);
            }
            intervalo++;
        }
    }
    
    if (y > x){
        intervalo = x;
        while (intervalo <= y){
            if (intervalo % 2 != 0){
                printf ("%d\n", intervalo);
            }
            intervalo++;
        }
    }
    
    return 0;
}