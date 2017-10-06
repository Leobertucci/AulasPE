#include<stdio.h>

unsigned int somatorioC(unsigned int n, unsigned int parcial){
	if(n==0) return parcial;
	return somatorioC(n-1, parcial+n);
}

unsigned int somatorio(unsigned int n){
	return somatorioC(n,0);
}

int main(){
	printf("Somatorio - Digite um valor:\n");
	int soma;
	scanf("%d", &soma);
	printf("Somatorio = %d\n", somatorio(soma));
}
