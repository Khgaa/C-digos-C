
int menornumero(int numero1, int numero2){
   int menor = 999;
   if (numero1 < numero2)
       menor = numero1;
   else
       menor = numero2;

   return menor;
}

int main(){
    int x, y, z, menorvalor = 0;
    printf("Digite um numero: ");
    scanf ("%d", &x);
    printf("Digite um numero: ");
    scanf ("%d", &y);
    printf("Digite um numero: ");
    scanf ("%d", &z);
    
    menorvalor = menornumero( menornumero (x, y), z);
    
    printf ("Valor de x: %d\nValor de y: %d\nValor de z: %d\nMenor valor lido: %d\n", x, y, z, menorvalor);

    return 0;
}
