/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

int main()
{
    int x = 0;
    
    while (x < 101){
        if (x % 2 != 0){
           printf ("%d\n", x);
        }
        x ++;
    }
    return 0;
}