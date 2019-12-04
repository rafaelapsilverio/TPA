/*
Função: ler 50 números e exibir a soma e a média entre eles
Autor: Rafaela Petelin 
Data de criação: 29/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c;
	float  n, soma, media;
        setlocale(LC_ALL, "");
         for(c==1; c <= 2;c++){
           printf("Informe um número: \n");
             scanf("%f", &n);
              soma = soma + n;
         	 media = soma / 2;
         }
         	printf("A soma é %.2f \n", soma);
         	printf("A média é %.2f \n", media);
         	printf("\n");
          system ("pause");
        
}


