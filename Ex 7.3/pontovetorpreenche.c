#include <stdio.h>
#include <stdio.h>
#include <math.h>




struct ponto{
	int x;
	int y;
};

void dist (struct ponto* d){
	int j,n;float distponto,maior,dx,dy;
	maior=0;
	for (j=0; j<10;j++){
		dx=pow(d[j].x,2);
		dy=pow(d[j].y,2);
		distponto = pow(dx+dy,0.5);		
		if (distponto>maior){
		maior=distponto;
		n=j+1;
		}
	}	
	printf ("O ponto %d sera o mais distante, %.3f U.M." , n,maior);
	
}

void preenche1 (struct ponto* p){
	printf ("informe x\n");
	scanf ("%d",&(*p).x);	
	printf ("informe y\n");
	scanf ("%d",&(*p).y);
}

void preenche(struct ponto* c){
	int i;	
	for (i=0;i<10;i++){	
	preenche1((c+i));	
	}
}


int main(void){
	struct ponto coord[9];
	preenche(coord);
	dist(coord);
return 0;

}
