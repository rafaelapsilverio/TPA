/*
Fun��o: ler 50 n�meros e exibir a soma e a m�dia entre eles
Autor: Rafaela Petelin 
Data de cria��o: 29/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c;
	float  n, soma, media;
        setlocale(LC_ALL, "");
         for(c==1; c <= 2;c++){
           printf("Informe um n�mero: \n");
             scanf("%f", &n);
              soma = soma + n;
         	 media = soma / 2;
         }
         	printf("A soma � %.2f \n", soma);
         	printf("A m�dia � %.2f \n", media);
         	printf("\n");
          system ("pause");
        
}


