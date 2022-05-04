
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
