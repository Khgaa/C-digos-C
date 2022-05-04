/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

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