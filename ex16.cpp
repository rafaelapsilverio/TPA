/*
Função: exibir se um número é par ou ímpar
Autor: Rafaela Petelin 
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int n = 0, quo = 0, res = 0;
        setlocale(LC_ALL, "");
	printf("informe o número: \n");
	scanf("%i", &n);
	quo = n / 2 ;
	res = n - (2 * quo);
        if(res == 0){
        printf("O número é par. \n\n\n"); 
        }
	else if(res > 0){
        printf("O número é ímpar. \n\n\n"); 
        }
        else if(n == 1){
        printf("O número é ímpar.\n\n\n"); 
        }
        system("pause");
}
