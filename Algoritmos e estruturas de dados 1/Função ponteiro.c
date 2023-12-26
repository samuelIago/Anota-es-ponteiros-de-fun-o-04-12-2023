//ponteiro de função
//int(*ponteiro)(int,int);

/*#include <stdio.h>

int incrementa(int valor){
	return ++valor;//a funcao retorna um int
}
int(*ponteiro)(int) = incrementa;//o ponteiro é do tipo int por causa da funcao
//agora analisa o tipo da variavel, a variavel valor é int
int main()
{
	
	return 0;
}*/
#include <stdio.h>
int soma (int a,int b){//cria uma funcao soma
	return a+b;
}

int subtracao (int a,int b){
	return a-b;
}
int multiplicacao (int a,int b){
	return a*b;
}
int divisao (int a,int b){
	return a/b;
}
int calcula(int x,int y, int (*operacao)(int, int)){//endereco da funcao operacao com 2 argumentos)
	return(*operacao)(x, y);//cria um ponteiro com o nome operacao
	//que recebe 2 ints o 5 e o 3
	//e realiza a operecao da funcao soma.
}
int main(){
	int resultado = calcula(5,3,divisao);//o ponteiro operacao pega o endereco e valores da funcao soma
	printf("Resultado: %f",resultado);
	return 0;
}
