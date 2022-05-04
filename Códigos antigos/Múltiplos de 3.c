

int main()
{
    int x = 1;
    int qnt = 1;
    
    while (qnt <= 5){
        if (x % 3 == 0){
            printf ("%d\n", x);
            qnt++;
        }
        x++;
        
    }
    
    return 0;
}
