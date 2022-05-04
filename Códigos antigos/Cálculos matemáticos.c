

int main()
{
    int x;
    int y;
    int maior;
    int menor;
    int soma;
    int sub;
    int divi;
    int multi;
    
    printf ("Digite um valor: ");
    scanf ("%d", &x);
    printf ("Digite outro valor: ");
    scanf ("%d", &y);
    
    maior = x;
    menor = y;
    
    if (y > x){
        maior = y;
        menor = x;
    }
    
    soma = maior + menor;
    sub = maior - menor;
    divi = maior / menor;
    multi = maior * menor;
    
    printf ("A soma dos numeros é: %d\nA subtração dos numeros é: %d\nA divisão dos numeros é: %d\nA multiplicação dos numeros é: %d\n", soma, sub, divi, multi);
    
}
