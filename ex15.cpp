/*
Função: verificar se um aluno foi aprovado ou reprovado
Autor: Rafaela Petelin 
Data de criação: 30/09/2019
Data de alteração: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	int media = 0;
	char nome[40];
        setlocale(LC_ALL, "");
	printf("informe o nome do aluno: \n");
	scanf("%s", &nome);
	printf("informe a media final do aluno: \n");
	scanf("%i", &media);
        if(media >= 7){
        printf("O aluno %s foi aprovado! \n\n\n", nome); 
        }
	else if(media < 7){
        printf("O aluno %s não foi aprovado. \n\n\n", nome); 
        }
        system("pause");
}
