#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    union {
        struct {
            char produto [20];
            int max_ton;    
            struct Rota caminho;
        }graneleiro;
        struct {
            char oilt[10];
            int max_bar;
            struct Rota caminho;
        }Petroleiro;
        struct{
            float preco;
            int n_pessoas;
            int ano_fab;
        }Iate;
    };
};


void preenche(struct Navio* n, int t){3W
    	
    scanf("%s",(*n).nome);
	scanf("%d",&(*n).comprimento);
	scanf("%d",&(*n).boca);
	scanf("%f",&(*n).velocidade);

    if(t==1){
        scanf("%s",(*n).graneleiro.produto);
        scanf("%d",&(*n).graneleiro.max_ton);
    	scanf("%s",(*n).graneleiro.caminho.rota);
    	scanf("%f",&(*n).graneleiro.caminho.distancia);
    	scanf("%d",&(*n).graneleiro.caminho.dias);
	}
	if(t==2){
        scanf("%s",(*n).Petroleiro.oilt);
        scanf("%d",&(*n).Petroleiro.max_bar);
	    scanf("%s",(*n).Petroleiro.caminho.rota);
	    scanf("%f",&(*n).Petroleiro.caminho.distancia);
	    scanf("%d",&(*n).Petroleiro.caminho.dias);
	}
	
	if(t==3){
        scanf("%f",&(*n).Iate.preco);    
        scanf("%d",&(*n).Iate.n_pessoas);
        scanf("%d",&(*n).Iate.ano_fab);
	}
	
}
	

int main (void){
    int tipo; struct Navio maru;	
    
    printf("Tipo de embarcacao: Graneleiro(1),Petroleiro(2),Iate(3)\n");
    scanf("%d",&tipo);
    preenche(&maru,tipo);
    if(tipo ==1){
        printf("Nome=%s\ncomprimento=%d\nboca=%d\nvelocidade%f\nRealiza a rota %s , distancia nominal de %f em %d dias, transportando %s %d ton",maru.nome,maru.comprimento,maru.boca,maru.velocidade,maru.graneleiro.caminho.rota,maru.graneleiro.caminho.distancia,maru.graneleiro.caminho.dias,maru.graneleiro.produto,maru.graneleiro.max_ton);
    }
    else if(tipo==2){
        printf("Nome=%s\ncomprimento=%d\nboca=%d\nvelocidade%f\nRealiza a rota %s , distancia nominal de %f em %d dias, transportando %s na quantidade de %d Barris",maru.nome,maru.comprimento,maru.boca,maru.velocidade,maru.Petroleiro.caminho.rota,maru.Petroleiro.caminho.distancia,maru.Petroleiro.caminho.dias,maru.Petroleiro.oilt,maru.Petroleiro.max_bar);}

	else{
            printf("Nome=%s\ncomprimento=%d\nboca=%d\nvelocidade%f\n%f valor de mercado \n acomodacao para %d pessoas \nfabricado e, %d",maru.nome,maru.comprimento,maru.boca,maru.velocidade,maru.Iate.preco,maru.Iate.n_pessoas,maru.Iate.ano_fab);
	}
    return 0;
}

