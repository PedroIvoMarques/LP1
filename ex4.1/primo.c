#include <stdio.h>
#include <stdlib.h>

int eh_primo(int a){
	int cont=0;
	for(int i=2; i <= a; i++){
		if ((a/i)*i==a){
			cont++;
		}
	}
	if (cont==1){
		return 1;
	}
	else{
		return 0;
	}
}		
		
int main(){
	int a,b;
	scanf("%d",&a);
	b=eh_primo(a);
	printf("%d\n",b);

}
