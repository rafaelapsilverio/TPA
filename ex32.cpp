/*
Fun��o: calcular a m�dia anual de 5 alunos, sabendo que h� 2 notas (uma por semestre), durante o ano
Autor: Rafaela Petelin 
Data de cria��o: 20/11/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int c, x = 1;
	float  n1, n2, media;
        setlocale(LC_ALL, "");
         for(c==1; c <= 4;c++){
           printf("************Aluno %i************\n", x);
           printf("\n");
           printf("Informe a nota do 1� semestre: \n");
             scanf("%f", &n1);
           printf("Informe a nota do 1� semestre: \n");
             scanf("%f", &n2);
         	 media = (n1 + n2) / 2;
         	printf("A m�dia do aluno � %.2f \n", media);
         	x++;
         	printf("\n");
		 }
        

          system ("pause");
        
}


