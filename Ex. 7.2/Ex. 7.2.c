#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct Rota{
	char rota[30];
	float distancia;
	int dias;
};

struct Navio{
	char nome[20];
	int comprimento;
	int boca;
	float velocidade;
	struct Rota caminho;

};


void preenche2(struct Rota* r){
	scanf("%s",r->rota);
	scanf("%f",&r->distancia);
	scanf("%d",&r->dias);
	
}


void preenche(struct Navio* n){
	
	scanf("%s",(*n).nome);
	scanf("%d",&(*n).comprimento);
	scanf("%d",&(*n).boca);
	scanf("%f",&(*n).velocidade);
	preenche2(&n->caminho);
	
}



int main (void){
	struct Navio maru;
	preenche(&maru);
	printf("Nome=%s\ncomprimento=%d\nboca=%d\nvelocidade%f\nRealiza a rota %s , distancia nominal de %f em %d dias",maru.nome,maru.comprimento,maru.boca,maru.velocidade,maru.caminho.rota,maru.caminho.distancia,maru.caminho.dias);
	return 0;
}
