/*
Função: apresentar nome e preço do lanche conforme número da opção digitada pelo usuário 
Autor: Rafaela Petelin 
Data de criação: 06/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int codigo = 0;
        setlocale(LC_ALL, "");
	printf("informe o codigo do lanche : \n");
	scanf("%i", &codigo);
	switch(codigo ){
          case 1: 
            printf("Cachorro Quente- R$3,50 \n");
            break;
          case 2: 
            printf("X-salada - R$5,00 \n");
            break;
          case 7: 
            printf("X-burguer - R$8,90 \n");
            break;
          case 15: 
            printf("X-tudo - R$12,70 \n");
            break;
          default: 
            printf("Não cadastrado \n");
            break;
        }
        system("pause");
}
