/*
Função: calcular media entre quatro notas
Autor: Rafaela Petelin 
Data de criação: 29/09/2019
Data de alteração: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	float n1 = 0, n2 = 0, n3 = 0, n4 = 0, media = 0;
        setlocale(LC_ALL, "");
	printf("informe a primeira nota: \n");
	scanf("%f", &n1);
	printf("informe a segunda nota: \n");
	scanf("%f", &n2);
        printf("informe a terceira nota: \n");
	scanf("%f", &n3);
        printf("informe a quarta nota: \n");
	scanf("%f", &n4);
	media = (n1 + n2 + n3 + n4) / 4;
	printf("A media é igual a %f \n\n\n", media);
	system("pause");
}