/*
Função: Mostrar todos os números pares entre os números digitados pelo usuário
Autor: Rafaela Petelin 
Data de criação: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int n1 = 0, n2 = 0, troca = 0, cont = 0, resto = 0;
        setlocale(LC_ALL, "");
        printf("*************************** \n");
        printf("Quais são os números pares?\n");
        printf("*************************** \n");
        printf("informe um número inteiro: \n");
        	scanf("%i", &n1);
        printf("informe outro número inteiro: \n");
        	scanf("%i", &n2);
        if(n1 > n2){
        	troca = n1;
        	n1 = n2;
        	n2 = troca;
		}
        cont = n1;
        while(cont <= n2){
	    resto = cont - (cont / 2 * 2);
	    if(resto == 0){
	    printf("%i \n", cont);
		}
         cont = cont + 1;
    }
    
          system ("pause");
        
}

