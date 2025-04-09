#include <stdio.h>

// Código do tabuleiro

void tabuleiro (int tabuleiro[10][10]){
      char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
      printf("Batalha Naval\n");
      printf(" ");

     for(int j = 0; j < 10; j++) 
     {
        printf("%c ", linha[j]);
     }
     printf("\n");

     for(int i = 0; i < 10; i++)
     {
        printf("%3d ", i+1);
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
     }
 }

int main() {

    // posição dos navios representadas por 3

    int navio[10][10] = {0};

    navio [1][4] = 3;
    navio [1][5] = 3;
    navio [1][6] = 3;

    navio[1][9] = 3;
    navio[2][9] = 3;
    navio[3][9] = 3;
    
  for (int i = 0; i < 3; i++)
      {
        navio[i][i] = 3;
        for (int i = 4; i < 7; i++)
        {
            navio[i][i] = 3;
        }
      }
tabuleiro(navio);

// formação de cone

int matriz[3][5] = {
    {0, 0, 1, 0, 0},
    {0, 1, 1, 1, 0},
    {1, 1, 1, 1, 1}
};

for (int i = 0; i < 3; i++) // Linhas do cone
{
    for (int j = 0; j < 5; j++)
    {
        if(matriz[i][j] == 1)
        {
            navio[i][j] = 5; // representação do cone
        }
    }
tabuleiro(navio);
}

// formação da cruz

int cruz[5][5] = {
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0},
    {1, 1, 1, 1, 1},
    {0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0}
};

for (int i = 0; i < 5; i++) // linhas da cruz
{
    for (int j = 0; j < 5; j++)
    {
        if (cruz[i][j] == 1)
        {
            navio[i + 5][j] = 5; // representação da cruz
        }
    }
}
tabuleiro(navio);

// formação do octaedro

int octaedro[5][5] = {
    {0, 0, 1, 0, 0},
    {0, 1, 1, 1, 0},
    {1, 1, 1, 1, 1},
    {0, 1, 1, 1, 0},
    {0, 0, 1, 0, 0}
};

for (int i = 0; i < 5; i++) // linhas do octaedro
{
    for (int j = 0; j < 5; j++)
    {
        if (octaedro[i][j] == 1) 
        {
            navio[i + 4][j = 5] = 5; // representação do octaedro
        }
    }
}
tabuleiro(navio);


    return 0;
}