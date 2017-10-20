#include <stdio.h>
#include <stdlib.h>


int IsPrimeVector(char* primo, int n){
	primo[0]=1;
	primo[1]=1;
	primo[2]=1;
	for(int i = 3; i<n;i++){
		primo[i]=1;
		for(int j = i-1; j>=2; j--){
			if(i%j==0){
				primo[i]=0;
			}
		}
	}
	int soma = 0;
	for(int i = 2; i<n; i++){
		if(primo[i]) soma++;
	}
	return soma;
}

int main(){
	
	int n;
	char* primo;
	scanf("%d",&n);
	primo=malloc(n*sizeof(char));
	printf("%d\n", IsPrimeVector(primo, n));
	

	
	return 0;
}
