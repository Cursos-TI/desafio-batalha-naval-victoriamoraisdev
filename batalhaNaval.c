#include <stdio.h>


int main() {
   //Criando o tabuleiro do Jogo (Matriz 10 x 10)
   int tabuleiro[10][10];

   char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//colunas
   
   printf("***** BATALHA NAVAL *****\n\n");
   printf("- Tabuleiro -\n\n");

   //Imprimi a linha do tabuleiro
   printf("   ");//Para alinhar a linha
   for (int i = 0; i < 10; i++)
   {
    printf("%c ", linha[i]);//Imprimi os números das colunas
   }
   printf("\n");

   //Exibi o Tabuleiro
   for (int i = 0; i < 10; i++)
   {
    printf("%2d ", i + 1);
    for(int j = 0; j < 10; j++)
    {
      tabuleiro[i][j] = 0;//Inicalização da matriz(tabuleiro)
    
      //Posição dos navios
      
      //Na horizontal
      tabuleiro[3][5] = 3;
      tabuleiro[3][6] = 3;
      tabuleiro[3][7] = 3;
       
      //Na vertical
      tabuleiro[5][3] = 3;
      tabuleiro[6][3] = 3;
      tabuleiro[7][3] = 3;

      //Na diagonal
      tabuleiro[1][1] = 3;//Navio 1
      tabuleiro[2][2] = 3;
      tabuleiro[3][3] = 3;

      tabuleiro[5][9] = 3;//Navio 2
      tabuleiro[6][8] = 3;
      tabuleiro[7][7] = 3;

      printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
   }
   
   return 0;
}
