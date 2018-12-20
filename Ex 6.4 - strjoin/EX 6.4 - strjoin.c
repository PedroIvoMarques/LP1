#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int strlen2 (char* str){
	int i,cont;
	cont=0;
	for (i=0;*(str+i)!='\0';i++){
		cont++;
	}	
return cont;

}

void strjoin(char* d,char* o1 ,char* o2){
	int i,j,meio;
	for (i=0;i<strlen2(o1);i++){
		*(d+i)=*(o1+i);
	}
	meio = strlen2(o1);
	for (j=0;j<strlen2(o2)+1;j++){
	
		*(d+meio+j)=*(o2+j);
	}	
}


int main (void){
	char s1[20],s2[20],sd[40];
	scanf("%s\n%s", s1,s2);
	strjoin(sd,s1,s2);
	printf("%s\n" , sd);
	return 0;
}
