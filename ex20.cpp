/*
Função: ler numero do mês e informar quantidade de dias do mês correspondente 
Autor: Rafaela Petelin 
Data de criação: 06/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int numero  = 0;
        setlocale(LC_ALL, "");
	printf("informe o numero do mês: \n");
	scanf("%i", &numero);
	switch(numero){
          case 1: 
            printf("Janeiro-31 dias \n");
            break;
          case 2: 
            printf("Fevereiro-28 dias \n");
            break;
          case 3: 
            printf("Março-31 dias \n");
            break;
          case 4: 
            printf("Abril-30 dias \n");
            break;
          case 5: 
            printf("Maio-31 dias \n");
            break;
          case 6: 
            printf("Junho-30 dias \n");
            break;
          case 7: 
            printf("Julho-31 dias \n");
            break;
          case 8: 
            printf("Agosto-31 dias \n");
            break;
          case 9: 
            printf("Setembro-30 dias \n");
            break;
          case 10: 
            printf("Outubro-31 dias \n");
            break;
          case 11: 
            printf("Novembro-30 dias \n");
            break;
          case 12: 
            printf("Dezembro-31 dias \n");
            break;
          default: 
            printf("Mês inválido \n");
            break;
        }
        system("pause");
}
