

int main (){
	int a, b, c, M, m;
	
	printf ("Digite o primeiro numero: ");
	scanf ("%i", &a);
	
	printf ("Digite o segundo numero: ");
	scanf ("%i", &b);
	
	printf ("Digite o terceiro numero: ");
	scanf ("%i", &c);
	
	M = a;
	m = b;
	
	if (a > b && a > c && c > b){
	    
	}
	
	if (c > b && c > a && b > a){
	    M = c;
	    m = a;
    }
	
	if (b > c && b > a && c > a){
	    M = b;
	    m = a;
	}
	
	if (a > b && a > c && b > c){
	    m = c;
	}
	
	if (b > c && b > a && a > c){
	    M = b;
	    m = c;
	}
	
	if (c > b && c > a && a > b){
	    M = c;
	}
	
	printf ("Maior: %d, Menor: %d", M, m);
	
	return 0 ;
  
}
