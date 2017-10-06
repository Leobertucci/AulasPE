#include<stdio.h>

int NumDigC(int x, int parcial){
	if(x<10) return parcial;
	return NumDigC(x/10, parcial+1);
}

int NumDig(int x){
	return NumDigC(x,1);
}

int main(){
	printf("Número de Dígitos - Digite um valor >0:\n");
	int x;
	scanf("%d", &x);
	printf("Dígitos = %d\n", NumDig(x));
}
