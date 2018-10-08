#include <stdio.h>
#include <stdlib.h>


float media (int* vec,int n){
	int i; float s;
	for(i=0; i<n; i++){
		s+=*(vec+i);
	} 
	return s/n;

}



void preenche (int* vec,int n){
	int i=0;
	while (n>i){
		scanf("%d", (vec+i));
		i++;		
	}
			
}




int main(){
	int n; float med=0;
	printf("digite o valor de n: ");
	scanf("%d",&n);
	int vec[100];
	preenche(vec,n);
	med=media(vec,n);
	printf("%.2f\n",med);
return 0;
}
