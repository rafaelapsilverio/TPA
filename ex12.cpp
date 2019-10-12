/*
Função: ler tres numeros e mostrar o maior 
Autor: Rafaela Petelin 
Data de criação: 29/09/2019
Data de alteração: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int n1 = 0, n2 = 0, n3 = 0;
        setlocale(LC_ALL, "");
	printf("informe o primeiro valor: \n");
	scanf("%i", &n1);
        printf("informe o segundo valor: \n");
	scanf("%i", &n2);
        printf("informe o terceiro valor: \n");
	scanf("%i", &n3);
        if(n1 > n2) and (n1 > n3){
        printf("O maior número é %i \n\n\n", n1); 
        }
	else if(n2 > n3){
        printf("O maior número é %i \n\n\n", n2); 
        }
        else{
        printf("O maior número é %i \n\n\n", n3); 
        }
        system("pause");
}