#include <stdio.h>	

int *cria_variavel(){//cria uma função ponteiro
int variavel =5;
return &variavel;//ela esta retornando o seu endereço
}

int main(){
	int *ponteiro = cria_variavel();
	printf("%d",*ponteiro);
}
