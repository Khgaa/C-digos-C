

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
