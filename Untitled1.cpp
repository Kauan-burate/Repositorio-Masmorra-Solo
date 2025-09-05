#include <stdio.h>
#include <string.h>
#include<locale.h> // para APARECER OS SÍMBOLOS EM PORTUGUÊS


void mostrarMenuComandos() {
	printf("\n---------------------------------------\n");
	printf("\033[0;35m COMANDOS\033[0m\n");
    printf(" Movimento:\n\n");
    printf("\033[0;31m  norte, Mover para o norte\033[0m\n");
   	printf("\033[0;36m  sul,   Mover para o sul\033[0m\n");
	printf("\033[0;32m  leste, Mover para o leste\033[0m\n");
	printf("\033[0;33m  oeste, Mover para o oeste\033[0m\n");

    printf("\n Ações:\n\n");
    printf(" pegar,     Pegar item no local atual\n");
    printf(" verificar, Verificar inventário\n");
    printf(" sair,      Sair do jogo");
    printf("\n---------------------------------------\n\n");
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
    char comando[20];
    int i, j;
    int posX = 1, posY = 1; 
    int temRelic = 0;       
    int jogando = 1;
    
    char mapa[5][5] ={
  { '*', '*', '*', '*', '*'},
	{ '*', '.', '.', '.', '*'},
	{ '*', '.', 'P', '.', '*'},
	{ '*', '.', '.', '.', '*'},
	{ '*', '*', '*', '*', '*'}
	};

    char locais[3][3][30] = {
        { "Velha Biblioteca", "Corredor Estreito", "Sala do Trono" },
        { "Jardim Abandonado", "Entrada Principal", "Galeria de Arte" },
        { "Porão Escuro", "Sala da Relíquia", "Torre Norte" }
    };

    char descricoes[3][3][100] = {
        {
            "Estantes empoeiradas cheias de livros antigos.",
            "Um corredor estreito e úmido.",
            "Um trono majestoso coberto por teias de aranha."
        },
        {
            "Um jardim com plantas mortas e fontes quebradas.",
            "Você está na entrada principal do castelo.",
            "Quadros antigos de pessoas desconhecidas."
        },
        {
            "Um porão frio e sem luz.",
            "Você vê um pedestal com a Relíquia Antiga!",
            "Você está no topo da torre, vendo a paisagem."
        }
    };

    printf("=== A Caçada ao Item Perdido ===\n");
    printf("Objetivo: Pegue a Relíquia Antiga e leve-a de volta para a Entrada Principal.\n\n");

    while (jogando == 1) {
    	printf("\n               MAPA\n\n");
    	for(i = 0; i < 5; i++){
    		for(j = 0; j < 5; j++){
    			if( mapa[i][j] == 'P'){
    				printf("\033[1;32m%c\t\033[0m", mapa[i][j]);
				}else{
					printf("%c\t", mapa[i][j]);
				}
			}	
			printf("\n");
		}
    	
        printf("\nLocal: %s\n", locais[posY][posX]);
        printf("%s\n", descricoes[posY][posX]);
    
       	mostrarMenuComandos();
        printf("Digite um comando: ");
        scanf(" %[^\n]", comando);
        
        printf("\n");

        if (strcmp(comando, "leste") == 0) {
            if (posY > 0) {
                posY--;
            } else {
                printf("\033[0;31m  Você não pode ir para lá!\033[0m\n");
            }
        }
        else if (strcmp(comando, "oeste") == 0) {
            if (posY < 2) {
                posY++;
            } else {
                printf("\033[0;31m  Você não pode ir para lá!\033[0m\n");
            }
        }
        else if (strcmp(comando, "sul") == 0) {
            if (posX < 2) {
                posX++;
            } else {
                printf("\033[0;31m  Você não pode ir para lá!\033[0m\n");
            }
        }
        else if (strcmp(comando, "norte") == 0) {
            if (posX > 0) {
                posX--;
            } else {
                printf("\033[0;31m  Você não pode ir para lá!\033[0m\n");
            }
        }
       
        else if (strcmp(comando, "pegar") == 0) {
            if (posY == 2 && posX == 1 && temRelic == 0) {
                temRelic = 1;
                printf("\033[0;33m Você pegou a Relíquia Antiga!\033[0m\n");
            }
            else if (temRelic == 1) {
                printf("\033[0;33m Você já está com a Relíquia.\033[0m\n");
                
            }
            else {
                printf("Não há nada para pegar aqui.\n");
            }
        }
        // Inventário
        else if (strcmp(comando, "verificar") == 0) {
            if (temRelic) {
                printf("Você está carregando a Relíquia Antiga.\n\n");
            } else {
                printf("Seu inventário está vazio.\n\n");
            }
        }
        
        else if (strcmp(comando, "sair") == 0) {
            printf("Saindo do jogo...\n");
            jogando = 0;
        }
        else {
            printf("Comando inválido!\n");
        }

        
        if (posY == 1 && posX == 1 && temRelic == 1) {
        	printf("\033[1;32m\nVocê retornou à Entrada Principal com a Relíquia Antiga!\n\033[0m");
            printf("\033[1;32mParabéns, você venceu!\n\033[0m");
            jogando = 0;
            
        }
        
        for(i = 0; i < 5; i++){
        	for(j = 0; j < 5; j++){
        		if(mapa[i][j] == 'P'){
        			mapa[i][j] = '.';
				}
			}
		}
		
		mapa[posX + 1][ posY + 1] = 'P';
    }

    return 0;
}
 
