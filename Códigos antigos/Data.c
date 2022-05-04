

int main (){
	
	int d, m, a;
	
	printf("Digite ano");
	scanf("%i",&a);
	
	printf("Digite mes");
	scanf("%i",&m);
	
	printf("Digite dia");
	scanf("%i",&d);

	
	if (1 <= m && m <= 12 ){
	
		}
	else 
		if (m > 12){
			printf ("mes invalido\n");
		}
		
		if (m == 4 && m == 6 && m == 9 && m == 11){
	}
	    else
	        if (d > 30){
	           printf ("data invalida\n");
	    }
	
	    if (m == 2){
	        if (a % 4 == 0){
	        }
	        else
	            if (d > 29){
	                printf ("data invalida\n");
	            }
	            
	            if (a % 4 != 0){
	        }
	        else
	            if (d > 28){
	                printf ("data invalida\n");
	            }
	        
	    
	if (1 <= d && d <= 31){
	
	}
	else 
		if ( d > 31) {
			printf ("data invalida\n");
		} 
		
	if (m == 4 || m == 6 || m == 9 || m == 11 && d <= 30){
	}
	else
	    if (d > 30){
	        printf ("data invalida\n");
	    }
    return 0;
}
