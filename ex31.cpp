/*
Função: ler, calcular e mostrar o quadrado de 5 números
Autor: Rafaela Petelin 
Data de criação: 20/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c;
	float  quad, n ;
        setlocale(LC_ALL, "");
         for(c==1; c <= 5;c++){
        printf("Informe um número: \n");
             scanf("%f", &n);
         	quad = n * n;
         	printf("O quadrado de %.2f é: %.2f \n", n, quad);
		 }
        

          system ("pause");
        
}


