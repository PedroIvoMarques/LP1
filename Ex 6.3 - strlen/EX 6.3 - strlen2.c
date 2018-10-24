#include <stdio.h>
#include <stdlib.h>


int strlen2 (char* str){
	int i,cont;
	for (i=0;*(str+i)!='\0';i++){
		cont++;
	}
	
return cont;
}



int main(void){
	char s1[50];int n;
	scanf("%s",s1);
	n=strlen2(s1);
	printf("%d\n",n);
	return 0;
}
