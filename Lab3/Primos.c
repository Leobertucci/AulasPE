#include<stdio.h>
#include<math.h>

int PrimoC(int x, int div){
	if (div==1)return 1;
	if(x%div==0)return 0;
	return PrimoC(x,div-1);
	
}

int Primo(int x){
	return PrimoC(x,(int) sqrt(x));
}

int main(){
	printf("É primo? - Digite um valor:\n");
	int x;
	scanf("%d", &x);
	printf("É primo: %d\n", Primo(x));
}
