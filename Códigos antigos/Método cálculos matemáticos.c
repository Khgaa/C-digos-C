/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int somatorio(int num1, int num2);
int subtracao(int num1, int num2);
int divisao(int num1, int num2);
int multiplicacao(int num1, int num2);
int maiorvalor(int num1, int num2);
int menorvalor(int num1, int num2);

int main(){
    
 int x;
 int y;
 int soma;
 int sub;
 int divi;
 int multi;
 int maior;
 int menor;
 
 printf("Digite um numero: ");
 scanf("%d", &x);

 printf("Digite outro numero: ");
 scanf("%d", &y);


 maior = maiorvalor(x, y);
 menor = menorvalor(x, y);
 soma = somatorio(maior, menor);
 sub = subtracao(maior, menor);
 divi = divisao(maior, menor);
 multi = multiplicacao(maior, menor);
 
 printf("A soma é: %d\nA subtração é: %d\nA divisão é: %d\nA multiplicação é: %d\n", soma, sub, divi, multi);
 return 0;
}

int somatorio(int num1, int num2){
    int som;
    som = num1 + num2;
    return som;
}

int subtracao(int num1, int num2){
    int su;
    su = num1 - num2;
    return su;
}
int divisao(int num1, int num2){
    int divz;
    divz = num1 / num2;
    return divz;
}
int multiplicacao(int num1, int num2){
    int mult;
    mult = num1 * num2;
    return mult;
}
int maiorvalor(int num1, int num2){
    if (num1 > num2){
        return num1;
    }
    else
        return num2;
}
int menorvalor(int num1, int num2){
    if (num1 > num2){
        return num2;
    }
    else
        return num1;
}