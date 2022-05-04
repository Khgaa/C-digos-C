

int main()
{
    int x = 1;
    int y;
    int z = 1;
    
    for (y = 1 ; y < 101 ; y++){
        printf("%d ", y);
    }
    
    printf ("\n");
    
    while (x < 101){
           printf ("%d ", x);
        x ++;
    }
    
    printf("\n");
    
    do 
    {
        printf ("%d ", z);
        z++;
    }while (z < 101);
    
    return 0;
}
