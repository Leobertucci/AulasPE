#include<stdio.h>
#include<math.h>


int SomaDig(int x){
	if(x<10) return x;
	return SomaDig(x/10)+x%((x/10)*10);
}

int main(){
	printf("Soma Dígitos - Digite um valor:\n");
	int x;
	scanf("%d", &x);
	printf("Soma Dígitos = %d\n", SomaDig(x));
}
