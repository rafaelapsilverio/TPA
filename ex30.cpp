/*
Função: ler e escrever o nome de 5 pessoas
Autor: Rafaela Petelin 
Data de criação: 29/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int i = 1;
	char n[40] = " ";
        setlocale(LC_ALL, "");
         for(i == 1; i <= 5;i++){
        printf("Informe um nome: \n");
            scanf("%s", &n);
         	printf("O nome é %s \n", n);
		 }
        

          system ("pause");
        
}

