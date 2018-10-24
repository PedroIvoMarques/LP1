#include <stdio.h>
#include <stdlib.h>

int eh_primo(int g){
	int cont=0;
	for(int i=2; i <= g; i++){
		if ((g/i)*i==g){
			cont++;
		}
	}
	if (cont==1){
		return 1;
	}
	else{
		return 0;}
}

void todos_os_primos(int max){
	int cont=0, b, x=2;
	while(x<=max){
		b=eh_primo(x);
		if (b!=0){	
			printf("%d\n", x);
		}	
		x++;
	}
}
		
int main(){
	int a;
	scanf("%d",&a);
	todos_os_primos(a);
	return 0;
}
