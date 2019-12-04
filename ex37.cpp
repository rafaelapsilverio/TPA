 /*
Função: ler 2 valores, calcular e mostrar a soma dos inteiros existentes entreos 2 valores lidos(inclusive)
Autor: Rafaela Petelin 
Data de criação: 29/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int n1 = 0, n2 = 0, troca = 0, soma = 0;
        setlocale(LC_ALL, "");
          printf("Informe o primeiro valor: \n");
          scanf("%i", &n1);
          printf("Informe o segundo valor: \n");
          scanf("%i", &n2);
          if(n1 > n2){
          	troca = n1;
          	n1 = n2;
          	n2 = troca;
		  }
		  for(int c = n1; c <= n2; c++){
		  	soma = soma + c;
		  }
		  printf("A soma dos inteiros entre %i e %i é %i", n1, n2, soma);
         	
          return 0;
        
}


