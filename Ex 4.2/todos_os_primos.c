#include <stdio.h>
#include <stdlib.h>



int todos_os_primos(int a){
	int cont=0;
	for(int i=2; i <= a; i++){
		if ((a/i)*i==a){
			cont++;
		}
	}
	return cont==1;
}
		
int main(){
	int a,b,x=2;
	scanf("%d",&a);
	while(x<=a){
		b=todos_os_primos(x);
		if (b!=0){	
			printf("%d\n", x);
		}	
		x++;
	}
	return 0;
}
