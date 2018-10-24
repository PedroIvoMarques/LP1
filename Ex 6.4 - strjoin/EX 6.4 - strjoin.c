#include <stdio.h>
#include <stdlib.h>

void strjoin(char* d,char* o1 ,char* o2){
	int cont,i,i2,f;
	cont=i2=0;
	for (i=0;cont!=2;i++){
		if(cont==0){
			*(d+i)=*(o1+i);
			if(*(o1+i+1)=='\0'){
				cont= 1;
			}
		}
		else{
			*(d+i)=*(o2+i2);
			if(*(o2+i2)=='\0'){
				cont= 2;
			}
			i2++;
		}
	}	
}


int main (void){
	char s1[20],s2[20],sd[40];
	scanf("%s\n%s", s1,s2);
	strjoin(sd,s1,s2);
	printf("%s\n" , sd);
	return 0;
}
