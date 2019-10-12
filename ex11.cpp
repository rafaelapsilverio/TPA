/*
Função: ler dois numeros e mostrar o maior 
Autor: Rafaela Petelin 
Data de criação: 29/09/2019
Data de alteração: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int n1 = 0, n2 = 0;
        setlocale(LC_ALL, "");
	printf("informe o primeiro valor: \n");
	scanf("%i", &n1);
        printf("informe o segundo valor: \n");
	scanf("%i", &n2);
        if(n1 == n2){
        printf("Os valores são iguais \n\n\n")
        }
	else if(n1 > n2){
        printf("O maior número é %i \n\n\n", n1); 
        }
        else{
        printf("O maior número é %i \n\n\n", n2); 
        }
        system("pause");
}