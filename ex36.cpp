 /*
Fun��o: ler 10 n�meros e exibir o maior e o menor n�mero digitado
Autor: Rafaela Petelin 
Data de cria��o: 29/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c;
	float  n,  maior = 0, menor = 0;
        setlocale(LC_ALL, "");
         for(c==1; c < 10;c++){
           printf("Informe um n�mero: \n");
             scanf("%f", &n);
              if(n > maior){
              	maior = n;
			  }else if(n < menor ){
              	menor = n;
         }
     }
         	printf("O maior n�mero � %2.f \n", maior);
         	printf("O menor n�mero � %2.f \n", menor);
         	printf("\n");
         	
          return 0;
        
}


