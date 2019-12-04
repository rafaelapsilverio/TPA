/*
Função: ler 2 valores e a partir de um menu de opções, permitir ao usuário realizar a operação correspondente 
Autor: Rafaela Petelin 
Data de criação: 06/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int codigo = 0;
        float resultado = 0, n1 = 0, n2 = 0;
        setlocale(LC_ALL, "");
	printf("informe o valor 1: \n");
	scanf("%f", &n1);
        printf("informe o valor 2: \n");
	scanf("%f", &n2);
        printf("Código 1 - Adição \n");
        printf("Código 2 - Subtração \n");
        printf("Código 3 - Multiplicação \n");
        printf("Código 4 - Divisão \n");
        printf("informe o código da operação desejada: \n");
	scanf("%i", &codigo);
	switch(codigo){
          case 1: resultado = n1 + n2;
            printf("O resultado é: %f \n",resultado);
            break;
          case 2: resultado = n1 - n2;
            printf("O resultado é: %f \n",resultado);
            break;
          case 3: resultado = n1 * n2;
            printf("O resultado é: %f \n",resultado);
            break;
          case 4: resultado = n1 / n2;
            printf("O resultado é: %f \n",resultado);
            break;    
          default: 
            printf("Operação inválida \n");
            break;    
        }
        system("pause");
}
