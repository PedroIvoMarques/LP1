#include <stdio.h>

int main(){
	char temps[50];int soma = 0,c = 0,b;char a;float media = 0; 
	while (c<50){	
		scanf("%d", &b);	
		temps[c]=b;
		soma+=b;		
		c++;		
	}
	media = soma/50.0;
	printf("Media das Temperaturas: %.2f\n", media);
	soma=0;
	for(c=0;c<50;c++){
		if (temps[c]>media){
			soma++;
		}	
	} 

	printf("Temperaturas Acima: %d\n", soma);
	return 0;
}
