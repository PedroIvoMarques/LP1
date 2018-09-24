#include <stdio.h>
#include <stdlib.h>



int todos_os_primos(int a){
	int cont=0;
	for(int i=2; i <= a; i++){
		//printf("DDD");
		//printf("%d %d\n", (a/i)*i, a);
		if ((a/i)*i==a){
			cont++;
		}
	}
	if (cont==1){
		return a ;
		
	}
	else{
		return 0;
	}
}		
		
int main(){
	int a,b,x=2;
	scanf("%d",&a);
	while(x<=a){
		b=todos_os_primos(x);
		if (b!=0){	
			printf("%d\n", b);
		}	
		x++;
	}
	return 0;
}
