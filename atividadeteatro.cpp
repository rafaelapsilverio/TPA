/*
Função: teatro
Autoras: Rafaela Petelin e Mikaela da Silva
Data de criação: 06/11/2019
Data de alteração: 04/12/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>


int main(){
	    setlocale(LC_ALL, "");
	    int opcao=0, t = 0, y = 0, ocupada = 0, desocupada = 0, total = 0, disponivel = 0, reservaint = 0, reservameia = 0, vendaint = 0, vendameia = 0, faltam = 0 ;
		char cadeira[t][y]  =  { { 'D' } }, confRes = ' ', confCompra = ' ', pag = ' ';
		float preco = 0, totalCompra = 0, arr_reservaint = 0, arr_reservameia = 0, arr_vendaint = 0, arr_vendameia = 0, arr_total = 0;
	    //exibir as opções
	    	printf("********************Informar o valor do ingresso e o tamanho da sala********************\n");
					printf("Por favor, informe o valor do ingresso:\n");
				    scanf("%f", &preco);
				    printf("Por favor, informe a quantidade de linhas:\n");
				    scanf("%i", &t); 
				    printf("Por favor, informe a quantidade de colunas:\n");
				    scanf("%i", &y); 
				    	printf("\n");
                     
                 	printf("*******************************************Sala de Teatro*******************************************\n");
                  	for(int c = 0; c < t; c++){
		              for(int j = 0; j < y; j++){
			             printf("----");	
	                     	}
		                printf("\n");
	                	for(int r = 0; r < y; r++){
	               		printf("| %c ", cadeira[t][y] = 'D');
	                      	}
	                	printf("\n");
	                       }
	                printf("********************Legenda********************\n");
	                printf("R = cadeira resevada para inteira\n");
					printf("C = cadeira reservada para meia\n");
					printf("V = cadeira vendida inteira\n");
					printf("M = cadeira vendida meia\n");
					printf("D = cadeira disponível\n");
						printf("\n\n");
	                
                                   
				
					
	    while(opcao == 0){
		printf("---Bem vindo ao teatro!---\n Opções: \n 1.Abrir um espetáculo\n 2.Reservar ou cancelar a reserva de um lugar\n 3.Comprar um lugar (inteira)\n 4.Comprar um lugar (meia)\n 5.Verificar mapa do teatro\n 6.Encerrar o espetáculo\n 7.Verificar parciais\n Escolha uma das opções acima, inserindo o número correspondente:\n");
        scanf("%i", &opcao);
               while(opcao > 8){
               	  printf("O número informado é inválido, por favor, informe outro número...\n");
                  scanf("%i", &opcao);
            }

                  			
				switch(opcao){
				case 1:
				printf("********************Abrir um espetáculo********************\n");	
				for(int d = 0; d < t; d++){
		         for(int e = 0; e < y; e++){
			       cadeira[d][e] = 'D';
	                     	}
                   	}
                   	printf("\n");
                   	printf("Todas as cadeiras estão disponívéis!\n");
                   	
				
					break;
					
				case 2:
					printf("******************************Reservar lugar******************************\n");
					//aqui verifica a cadeira a ser reservada
						printf("Qual é a linha da cadeira que deseja reservar?\n");
						scanf("%i", &t); 
						printf("Qual é a coluna da cadeira que deseja reservar?\n");
						scanf("%i", &y); 
						//aqui verifica se a cadeira está disponível ou não
						while(cadeira[t-1][y-1] == 'R' or cadeira[t-1][y-1] == 'C' or cadeira[t-1][y-1] == 'V' or cadeira[t-1][y-1] == 'M'){
							printf("A cadeira escolhida já foi reservada, por favor, insira uma cadeira vazia\n");
							printf("Qual é a linha da cadeira que deseja reservar?\n");
					    	scanf("%i", &t); 
					    	printf("Qual é a coluna da cadeira que deseja reservar?\n");
					    	scanf("%i", &y); 
							}
						//VERIFICA PAGAMENTO MEIA OU INTEIRA
						printf("O pagamento será inteira ou meia?(I/M): \n");
						scanf("%s", &pag);
						
						if(pag == 'I'){
						totalCompra = preco * 60 / 100;
					    }else if(pag == 'M'){
					    totalCompra = (preco / 2) * 60 / 100;	
						}
						
						printf("O preço total da reserva será R$ %.2f \n", totalCompra);
						
						//CONFIRMA RESERVA
						printf("Deseja efetuar reserva?(S/N): \n");
					    scanf("%s", &confRes);
					    //ATRIBUI RM=RESERVA MEIA E RI=RESERVA INTEIRA
					    if(confRes == 'S'){
					    	if(pag == 'I'){
							cadeira[t-1][y-1] = 'R';
							printf("Cadeira reservada com sucesso!\n");
						}
						else if(pag == 'M'){
						    cadeira[t-1][y-1] = 'C';
						    printf("Cadeira reservada com sucesso!\n");
						    }
					    }
					    else if(confRes == 'N'){
						 printf("Reserva cancelada!\n");
				     	}
						  
						
					
					
		
					break;
					
				case 3:
					
					printf("******************************Vender lugar(inteira)******************************\n");
						//aqui verifica a cadeira a ser COMPRADA
						printf("Qual é a linha da cadeira que deseja comprar?\n");
						scanf("%i", &t); 
						printf("Qual é a coluna da cadeira que deseja comprar?\n");
						scanf("%i", &y); 
						
						//aqui verifica se a cadeira está disponível, vendida ou reservada
						while(cadeira[t-1][y-1] == 'V'){
							printf("A cadeira escolhida já foi vendida, por favor, insira uma cadeira vazia\n");
							printf("Qual é a linha da cadeira que deseja reservar?\n");
					    	scanf("%i", &t); 
					    	printf("Qual é a coluna da cadeira que deseja reservar?\n");
					    	scanf("%i", &y); 
							}
						
							totalCompra = preco ;
							
			            printf("O preço total da compra será R$ %.2f \n", totalCompra);
			           
						//CONFIRMA RESERVA
						printf("Deseja confirmar a compra?(S/N): \n");
					    scanf("%s", &confCompra);
					 
					    if(confCompra == 'S'){
					        cadeira[t-1][y-1] = 'V';
							printf("Cadeira comprada com sucesso!\n");
						}
					
					    else if(confCompra == 'N'){
						 printf("Compra cancelada!\n");
				     	}
			
						  
		
					break;
				
				case 4:
					
						printf("******************************Vender lugar(meia)******************************\n");
						//aqui verifica a cadeira a ser COMPRADA
						printf("Qual é a linha da cadeira que deseja comprar?\n");
						scanf("%i", &t); 
						printf("Qual é a coluna da cadeira que deseja comprar?\n");
						scanf("%i", &y); 
						
						//aqui verifica se a cadeira está disponível, vendida ou reservada
						while(cadeira[t-1][y-1] == 'V'){
							printf("A cadeira escolhida já foi vendida, por favor, insira uma cadeira vazia\n");
							printf("Qual é a linha da cadeira que deseja reservar?\n");
					    	scanf("%i", &t); 
					    	printf("Qual é a coluna da cadeira que deseja reservar?\n");
					    	scanf("%i", &y); 
							}
							
						//receber valor do ingresso
				        
				        totalCompra = preco/ 2;
				 
						
			            printf("O preço total da compra será R$ %.2f \n", totalCompra);
			           
						//CONFIRMA RESERVA
						printf("Deseja confirmar a compra?(S/N): \n");
					    scanf("%s", &confCompra);
					 
					    if(confCompra == 'S'){
					        cadeira[t-1][y-1] = 'V';
							printf("Cadeira comprada com sucesso!\n");
						}
					
					    else if(confCompra == 'N'){
						 printf("Compra cancelada!\n");
				     	}
		
					break;
						
				case 5:
				printf("*******************************************Sala de Teatro*******************************************\n");
                  	for(int c = 0; c < t; c++){
		              for(int j = 0; j < y; j++){
			             printf("----");	
	                     	}
		                printf("\n");
	                	for(int r = 0; r < y; r++){
	               		printf("| %c ", cadeira[t][y] = 'D');
	                      	}
	                	printf("\n");
	                       }
	                printf("********************Legenda********************\n");
	                printf("R = cadeira resevada para inteira\n");
					printf("C = cadeira reservada para meia\n");
					printf("V = cadeira vendida inteira\n");
					printf("M = cadeira vendida meia\n");
					printf("D = cadeira disponível\n");
						printf("\n\n");
	                
					
		
					break;
					
					case 6:
					for(int c = 0; c < t; c++){
		              for(int j = 0; j < y; j++){	
	                    if (cadeira[c][j] != 'D'){
	                    	ocupada = ocupada + 1;
						} 
						else if(cadeira[c][j] == 'D'){
	                    	desocupada = desocupada + 1;
						} 
							total = total + 1;
	                      	}
	                	printf("\n");
	                       }
	                    if(ocupada >= (total * 60 / 100)){
	                    	printf("O espetáculo pode ser realizado\n");
						}
						else if(desocupada > (total * 60 / 100)){ 
						    printf("O espetáculo será encerrado, a quantidade de cadeiras ocupadas é insuficiente.\n");
						}
		
					break;
				
				case 7:
					
					for(int c = 0; c < t; c++){
		              for(int j = 0; j < y; j++){	
	                    if (cadeira[c][j] == 'D'){
	                    	disponivel = disponivel + 1;
						} 
						else if(cadeira[c][j] == 'R'){
	                    	reservaint = reservaint + 1;
						} 
						else if(cadeira[c][j] == 'C'){
	                    	reservameia = reservameia + 1;
						} 
						else if(cadeira[c][j] == 'V'){
	                    	vendaint = vendaint + 1;
						} 
						else if(cadeira[c][j] == 'M'){
	                    	vendameia = vendameia + 1;
						} 
							total = total + 1;
					}
				}
				printf(" %i cadeiras estão dísponíveis\n", disponivel);
			
				
				arr_reservaint = reservaint * (preco * 60 / 100);
				arr_reservameia = reservameia * ((preco / 2) * 60 / 100);
				arr_vendaint = vendaint * (preco * 40 / 100);
				arr_vendameia = vendameia * ((preco / 2) * 40 / 100);
				arr_total = arr_reservaint + arr_reservameia + arr_vendaint + arr_vendameia;
				
			    printf("%i cadeiras estão reservadas para meia entrada\n",reservameia);
                printf("%i cadeiras estão reservadas para entrada inteira\n",reservaint);
                printf("%i cadeiras estão vendidas para meia entrada\n",vendameia);
                printf("%i cadeiras estão vendidas para entrada inteira\n",vendaint);
                printf("O valor total arrecadado é R$ %.2f \n", arr_total);
                
                if(disponivel > (total * 60 / 100)){
                	faltam = (total * 60 / 100) - (total - disponivel);
                	printf("O espetáculo ainda não pode acontecer, faltam ser ocupadas %i cadeiras.\n", faltam);
				}
                else if(disponivel <= (total * 60 / 100)){
                	printf("O espetáculo já pode acontecer.\n");
				}
					break;
					
		    	}
						
		}
        

            
    
   //   system ("pause");
        
}

  
