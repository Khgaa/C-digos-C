/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

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