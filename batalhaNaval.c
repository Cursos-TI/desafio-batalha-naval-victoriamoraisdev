#include <stdio.h>

//Criação da área afeta em cone
void cone(int tab[10][10])
{
  for(int i = 0; i < 10; i++) 
  {
    for(int j = 0; j < 10; j++)
    {
       tab[0][6] = 1;
       tab[1][5] = 1;
       tab[1][6] = 1;
       tab[1][7] = 1;
       tab[2][4] = 1;
       tab[2][5] = 1;
       tab[2][6] = 1;
       tab[2][7] = 1;
       tab[2][8] = 1;
    }
  }
  
}

//Criação da área afeta em cruz
void cruz(int tab[10][10]) 
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++) 
    {
      tab[5][2] = 1;
      tab[6][2] = 1;
      tab[7][0] = 1;
      tab[7][0] = 1;
      tab[7][1] = 1;
      tab[7][2] = 1;
      tab[7][3] = 1;
      tab[7][4] = 1;
      tab[8][2] = 1;
      tab[9][2] = 1;
    }
  }
  
}

//Criação da área afeta em octaedro
void octaedro(int tab[10][10]) 
{
  tab[5][7] = 1;
  tab[6][6] = 1;
  tab[6][7] = 1;
  tab[6][8] = 1;
  tab[7][7] = 1;
}

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
      tabuleiro[3][5] = 7;
      tabuleiro[3][6] = 7;
      tabuleiro[3][7] = 7;
       
      //Na vertical
      tabuleiro[5][5] = 7;
      tabuleiro[6][5] = 7;
      tabuleiro[7][5] = 7;

      //Na diagonal
      tabuleiro[1][1] = 7;//Primeiro navio 
      tabuleiro[2][2] = 7;
      tabuleiro[3][3] = 7;

      tabuleiro[7][9] = 7;//Segundo Navio 
      tabuleiro[8][8] = 7;
      tabuleiro[9][7] = 7;

      //Mostra as áreas afetadas
      cone(tabuleiro);
      cruz(tabuleiro);
      octaedro(tabuleiro);

      printf("%d ", tabuleiro[i][j]);//Exibi o tabuleiro
    }
    printf("\n");
   }
   
   //Legenda do tabuleiro
   printf("\n- (0) Água 💧\n");
   printf("- (7) Navios 🚢\n");
   printf("- (1) Área afetada 💢\n");
   return 0;
}
