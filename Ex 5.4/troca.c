#include <stdio.h>

void troca(int *a, int *b){
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

int main(){
	int x=10, y=20;
	troca(&x, &y);
	printf("%d %d\n", x, y);
	return 0;
}
