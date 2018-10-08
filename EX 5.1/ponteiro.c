#include <stdio.h>
#include <stdlib.h>


int main(){
	int a,b ;
	
	scanf("%d %d",&a,&b);	
	int *p;	
	if (a>b){

		p=&a;
	
		}
	else{
		p=&b;
		}
		*p-=50;
	printf("%d\n",a);
	printf("%d\n",b);
return 0;
}
