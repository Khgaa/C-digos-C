
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
