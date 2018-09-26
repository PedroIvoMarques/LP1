#include <stdio.h>
#include <stdlib.h>
void compra (int* conta, int valor) {
	*conta=*conta-valor;
}

int main(){
	int minha_conta1,minha_conta2 ;int *banco;
	scanf("%d %d",&minha_conta1,&minha_conta2);	
	if (minha_conta1>minha_conta2){
		banco=&minha_conta1;
	}
	else{
		banco=&minha_conta2;
	}
	compra(banco,500);	
	printf("%d %d\n",minha_conta1,minha_conta2);
	return 0;
}
