

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
