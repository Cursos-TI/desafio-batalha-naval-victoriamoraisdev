#include <stdio.h>



int main() {
   //Criando o tabuleiro do Jogo (Matriz 10 x 10)
   int tabuleiro[10][10] = 
   {
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
   };

   char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//Linha do Tabuleiro
   
   printf("***** BATALHA NAVAL *****\n\n");
   printf("- Tabuleiro -\n\n");

   //Imprimi a linha do tabuleiro
   printf("   ");//Para alinhar a linha
   for (int i = 0; i < 10; i++)
   {
    printf("%c ", linha[i]);
   }
   printf("\n");

   //Posição dos navios
   for(int i = 0; i < 100; i++)//Navio na horizontal
   {
        tabuleiro[3][5] = 3;
        tabuleiro[3][6] = 3;
        tabuleiro[3][7] = 3;
   }
   
   for(int i = 0; i < 100; i++)//Navio na vertical
   {
        tabuleiro[5][3] = 3;
        tabuleiro[6][3] = 3;
        tabuleiro[7][3] = 3;
   }
   
   //Imprimi o Tabuleiro
   for (int i = 0; i < 10; i++)
   {
    printf("%2d ", i + 1);
    for(int j = 0; j < 10; j++)
    {
       printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
   }
   
   return 0;
}
