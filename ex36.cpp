 /*
Função: ler 10 números e exibir o maior e o menor número digitado
Autor: Rafaela Petelin 
Data de criação: 29/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c;
	float  n,  maior = 0, menor = 0;
        setlocale(LC_ALL, "");
         for(c==1; c < 10;c++){
           printf("Informe um número: \n");
             scanf("%f", &n);
              if(n > maior){
              	maior = n;
			  }else if(n < menor ){
              	menor = n;
         }
     }
         	printf("O maior número é %2.f \n", maior);
         	printf("O menor número é %2.f \n", menor);
         	printf("\n");
         	
          return 0;
        
}


