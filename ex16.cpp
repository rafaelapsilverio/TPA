/*
Fun��o: exibir se um n�mero � par ou �mpar
Autor: Rafaela Petelin 
Data de cria��o: 30/09/2019
Data de altera��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int n = 0, quo = 0, res = 0;
        setlocale(LC_ALL, "");
	printf("informe o n�mero: \n");
	scanf("%i", &n);
	quo = n / 2 ;
	res = n - (2 * quo);
        if(res == 0){
        printf("O n�mero � par. \n\n\n"); 
        }
	else if(res > 0){
        printf("O n�mero � �mpar. \n\n\n"); 
        }
        else if(n == 1){
        printf("O n�mero � �mpar.\n\n\n"); 
        }
        system("pause");
}
