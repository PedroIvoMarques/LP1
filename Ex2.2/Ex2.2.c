#include <stdio.h>
#include <stdlib.h>



int main (){
	int i,n1,n2,aux;
	scanf("%d %d", &n1 , &n2);
	
	if (n2>n1){
	aux=n1;
	n1=n2;
	n2=aux;
	}

	for (i=n2; i<=n1; i++){
	printf("%d " , i);
	}
printf("\n");
return 0;

}
