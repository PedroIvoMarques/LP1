#include <stdio.h>
#include <stdlib.h>


struct Navio{
	char nome[20];
	int comprimento;
	int boca;
	float velocidade;

};


void preenche(struct Navio* n){
	scanf("%s",(*n).nome);
	scanf("%d",&(*n).comprimento);
	scanf("%d",&(*n).boca);
	scanf("%f",&(*n).velocidade);
}
	

int main (void){
	struct Navio maru;
	preenche(&maru);
	printf("%s\n%d\n%d\n%f\n",maru.nome,maru.comprimento,maru.boca,maru.velocidade);
	return 0;
}





