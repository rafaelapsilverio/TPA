 /*
Função: ler 10 números e exibir o maior número digitado
Autor: Rafaela Petelin 
Data de criação: 29/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c;
	float  n,  maior = 0;
        setlocale(LC_ALL, "");
         for(c==1; c <= 10;c++){
           printf("Informe um número: \n");
             scanf("%f", &n);
              if(n > maior){
              	maior = n;
			  }
         }
         	printf("O maior número é %2.f \n", maior);
         	printf("\n");
          system ("pause");
        
}


