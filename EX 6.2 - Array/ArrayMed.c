#include <stdio.h>
#include <stdlib.h>


void preenche (int arr[2][3]){
	int i,j;
	printf("Digite os numeros do array\n");
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){	
			scanf("%d", &arr[i][j]);		
		}	
	}

}


float media (int arr[2][3]){
	int soma=0,i,j;	
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			soma+=arr[i][j];			
		}	
	}
	return soma/6.0;
}


int main(void){	
	int arr[2][3];
	preenche(arr);
	printf("%.2f\n",media(arr));
	return 0;
}
