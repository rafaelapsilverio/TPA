/*
Função: classificar categoria de um nadador a parir da idade
  infantil: entre 5 e 7 anos
  juvenil: entre 12 e 17 anos
  adultos: maiores de 18 anos
Autor: Rafaela Petelin 
Data de criação: 29/09/2019
Data de alteração: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int idade = 0;
        setlocale(LC_ALL, "");
	printf("informe a idade: \n");
	scanf("%i", &idade);
        if(idade >= 5) and (idade <= 11){
        printf("A categoria é infantil \n\n\n"); 
        }
	else if(idade >= 12) and (idade <= 17){
        printf("A categoria é juvenil \n\n\n"); 
        }
        else if(idade >= 18){
        printf("A categoria é adultos \n\n\n"); 
        }
        else if(idade < 5){
        printf("A idade não se aplica a nenhuma categoria \n\n\n"); 
        }
        system("pause");
}