

int minus(numero1, numero2);


int main(){
    
 int x;
 int y;
 int menor;
 
 printf("Digite um valor: ");
 scanf("%d", &x);
printf("Digite outro valor: ");
 scanf("%d", &y);
 
 menor = minus(x, y);
 printf("O menor número é: %d\n", menor);
 return 0;
}

int minus(numero1, numero2){
    
 if (numero1 > numero2){
 return numero2;
 }
 else{
 return numero1;
 }
}

