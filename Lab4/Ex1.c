#include <stdio.h>

int len(char*s){
	int n = 0;
	while (s[n] !='\0'){
		n+=1;
	}
	return n;
}

char* concatena(char* s1, char* s2){
	
}

int main(){

	char s1[255];
	scanf("%s",s1);
	printf("%d\n",len(s1));
	
	return 0;
}
