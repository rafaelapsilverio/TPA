/*
Fun��o: ler numero do dia e informar dia da semana correspondente 
Autor: Rafaela Petelin 
Data de cria��o: 06/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int dia = 0;
        setlocale(LC_ALL, "");
	printf("informe um dia: \n");
	scanf("%i", &dia);
	switch(dia){
          case 1: 
            printf("Domingo \n");
            break;
          case 2: 
            printf("Segunda-feira \n");
            break;
          case 3: 
            printf("Ter�a-feira \n");
            break;
          case 4: 
            printf("Quarta-feira \n");
            break;
          case 5: 
            printf("Quinta-feira \n");
            break;
          case 6: 
            printf("Sexta-feira \n");
            break;
          case 7: 
            printf("S�bado \n");
            break;
          default: 
            printf("Dia inv�lido \n");
            break;
        }
        system("pause");
}
