#include<stdio.h>

unsigned int somatorio(unsigned int n){
	if(n==1) return 1;
	return n+somatorio(n-1);
}

int main(){
	printf("Somatorio - Digite um valor:\n");
	int soma;
	scanf("%d", &soma);
	printf("Somatorio = %d\n", somatorio(soma));
}
