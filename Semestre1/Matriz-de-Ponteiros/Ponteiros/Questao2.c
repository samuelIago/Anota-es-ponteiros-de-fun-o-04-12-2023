//Quest�o 2) Considere o trecho de c�digo abaixo:
/*
int main(void) {
int x, *p;
x = 100;
p = x;
printf(�Valor de p = %p\tValor de *p = %d�, p, *p);
}*/
/*
Se tentarmos compilar o programa (n�o o compile ainda), voc� acha que o compilador nos
fornece alguma mensagem? Se sim, responda:
a) Esta mensagem � de erro ou advert�ncia?
Advert�ncia.
b) Por que o compilador emite tal mensagem?
Porque para que um ponteiro receba um endere�o � necess�rio &
c) Compile e execute o programa. A execu��o foi bem sucedida?
N�o
d) Modifique o trecho de c�digo acima, de modo que nenhuma mensagem seja emitida
pelo compilador.
int main(void) {
int x, *p;
x = 100;
p = &x;
printf(�Valor de p = %p\tValor de *p = %d�, p, *p);
}

e) Compile e execute novamente o programa. A execu��o foi bem sucedida?
SIm
*/