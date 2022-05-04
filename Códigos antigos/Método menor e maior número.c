/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int menornumero(int numero1, int numero2){
   int menor = 999;
   if (numero1 < numero2)
       menor = numero1;
   else
       menor = numero2;

   return menor;
}

int maiornumero( int numero1, int numero2 ){
    int maior = 0;
    if ( numero1 > numero2 )
        maior = numero1;
    else 
        maior = numero2;
    return maior;
}

int main(){
    int x;
    int y;
    int z;
    int maiorvalor = 0;
    int menorvalor = 0;
    
    printf("Digite um numero: ");
    scanf ("%d", &x);
    printf("Digite um numero: ");
    scanf ("%d", &y);
    printf("Digite um numero: ");
    scanf ("%d", &z);
    
    menorvalor = menornumero( menornumero (x, y), z);
    maiorvalor = maiornumero( maiornumero (x, y), z);
    
    printf ("Valor de x: %d\nValor de y: %d\nValor de z: %d\nMenor valor lido: %d\nMaior valor lido: %d\n", x, y, z, menorvalor, maiorvalor);

    return 0;
}
