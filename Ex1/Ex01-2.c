#include <stdio.h>


int main(void){
	int a1,a2;
//----------------------------------//var
printf ("Digite a1 depois a2: ");
scanf("%d %d", &a1,&a2);
if (a1 > a2){
	printf("Maior e %d\n", a1);}
else{
	printf("Maior e %d\n", a2);}
return 0; 
}
