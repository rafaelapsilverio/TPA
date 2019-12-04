/*
Função: ler e mostrar o nome de 50 pessoas 
Autor: Rafaela Petelin 
Data de criação: 06/10/2019
Data de alteração: 23/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int cont = 0;
        char nome[50] ;
        setlocale(LC_ALL, "");
        while(cont < 50){
		printf("informe o nome da pessoa: \n");
        	scanf("%s", &nome);
        printf("Bom Dia, %s ! \n", nome) ;
         cont = cont + 1;
    }
          system ("pause");
        
}

