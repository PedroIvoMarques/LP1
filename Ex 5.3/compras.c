#include <stdio.h>
#include <stdlib.h>
void compra (int* conta, int valor) {
	*conta=*conta-valor;
}

int main(){
	int compras[] = { 100, 50, 80, 30, 20 };
	int minha_conta1,minha_conta2, i ;int *banco;
	int tamanho = (int)(sizeof(compras)/sizeof(compras[0]));
	scanf("%d %d",&minha_conta1,&minha_conta2);
	for(i=0; i<tamanho; i++){	
		if (minha_conta1>minha_conta2){
			banco=&minha_conta1;
		}
		else{
			banco=&minha_conta2;
		}
		compra(banco,compras[i]);
		printf("%d %d\n",minha_conta1,minha_conta2);
	}	
	return 0;
}
