/*Quest�o 4) Crie um programa para calcular a �rea e o per�metro de um hex�gono. O seu
programa deve implementar uma fun��o chamada calcula_hexagono que calcula a �rea e o
per�metro de um hex�gono regular de lado l. A fun��o deve obedecer ao seguinte prot�tipo:
void calcula_hexagono(float l, float *area, float *perimetro); A �rea e o per�metro de um
hex�gono regular s�o dados, respectivamente, por:
A=3l^2raiz3/2

P=6l

Obs: Para os c�lculos, utilize as fun��es sqrt e pow do m�dulo math da biblioteca
padr�o de C. Em seguida, crie a fun��o principal do programa e utilize a fun��o
calcula_hexagono para calcular a �rea e o per�metro de um hex�gono de lado l
informado pelo usu�rio.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
void calcula_hexagono(float l, float *area, float *perimetro);

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float lado, Perimetro, Area;
	printf("Digite o tamanho do lado do hexagono:\n");
	scanf("%f",&lado);
	
	calcula_hexagono(lado,&Perimetro,&Area);
	//Isso faz o codigo entender que essa fun��o existe e que vai usar o int lado
	// e os enfere�os das fun��es Perimetro e Area
	printf("O perimetro � %.2f, a Area � %.2f\n",Perimetro,Area);
	return 0;
}

void calcula_hexagono(float l, float *area, float *perimetro){
	
	*perimetro = 6*l;
	
	*area = (3* pow(l,2)*sqrt(l))/2;
	//A fun�ao est� fazendo com que os conte�dos do perimetro sejam 6*l
	//como o ponteiro perimetro usa o endere�o da fun��o Perimetro
	//ao alterar o conteudo desse ponteiro, o conte�do da variavel � alterado junto.
	
}