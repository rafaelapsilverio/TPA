/*
Fun��o: ler 2 valores e a partir de um menu de op��es, permitir ao usu�rio realizar a opera��o correspondente 
Autor: Rafaela Petelin 
Data de cria��o: 06/10/2019
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
        printf("C�digo 1 - Adi��o \n");
        printf("C�digo 2 - Subtra��o \n");
        printf("C�digo 3 - Multiplica��o \n");
        printf("C�digo 4 - Divis�o \n");
        printf("informe o c�digo da opera��o desejada: \n");
	scanf("%i", &codigo);
	switch(codigo){
          case 1: resultado = n1 + n2;
            printf("O resultado �: %f \n",resultado);
            break;
          case 2: resultado = n1 - n2;
            printf("O resultado �: %f \n",resultado);
            break;
          case 3: resultado = n1 * n2;
            printf("O resultado �: %f \n",resultado);
            break;
          case 4: resultado = n1 / n2;
            printf("O resultado �: %f \n",resultado);
            break;    
          default: 
            printf("Opera��o inv�lida \n");
            break;    
        }
        system("pause");
}
