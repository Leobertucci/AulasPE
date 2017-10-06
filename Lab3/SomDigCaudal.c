#include<stdio.h>

int SomaDigC(int x, int parcial){
	if(x<10) return x+parcial;
	return SomaDigC(x/10,parcial+x%((x/10)*10));
}

int SomaDig(int x){
	return SomaDigC(x,0);
}

int main(){
	printf("Soma Dígitos - Digite um valor:\n");
	int x;
	scanf("%d", &x);
	printf("Soma Dígitos = %d\n", SomaDig(x));
}
