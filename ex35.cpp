 /*
Fun��o: ler 10 n�meros e exibir o maior n�mero digitado
Autor: Rafaela Petelin 
Data de cria��o: 29/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c;
	float  n,  maior = 0;
        setlocale(LC_ALL, "");
         for(c==1; c <= 10;c++){
           printf("Informe um n�mero: \n");
             scanf("%f", &n);
              if(n > maior){
              	maior = n;
			  }
         }
         	printf("O maior n�mero � %2.f \n", maior);
         	printf("\n");
          system ("pause");
        
}


