#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

double potencia(double x, double y){
	double r=(pow(x,y));
	return r;
}

double sqrt(double r){
	return sqrt(r);
}

int fatorial(int n){
	int r = 1;
	for(int i = 2; i <=n; i++){
		r=r*i;
	}
	return r;
}

double RamaPi(int k){
	double sum = 0.0;
	for(int i = 0; i<=k; i++){
		sum+=(fatorial(4*i)*(1103+26390*i))/(potencia(fatorial(i),4)*potencia(396,4*i));
	}
	return (9801/(2*sqrt(2)*sum));
}

double ChudPi(int k){
	double sum = 0.0;
	for(int i = 0; i<=k; i++){
		sum+=(fatorial(6*i)*(13591409+545140134*i)*potencia((-1),i))/(potencia(fatorial(i),3)*potencia(640320,(3*i+1.5))*fatorial(3*i));
	}
	return (1/(12*sum));
}

double


int main(){
	printf("ChudPi\n");
	printf("%f\n", ChudPi(8));
	return 0;
}
