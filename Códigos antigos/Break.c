

int main()
{
    int i = 1;
    
    while (i <= 20){
        printf ("i = %d\n", i);
        i++;
        if (i == 2){
            continue;
        }
        if (i == 5){
            break;
        }
    }
    
    
    return 0;
}
