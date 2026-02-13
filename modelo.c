#include "modelo.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Matriz {
    int linha;
    int coluna;
    char valor;
};


int modelo(int a) {

    int opcao;

    if(a == 1){
       char m[7][29];

        /* limpa a matriz */
        for (int i = 0; i < 7; i++)
            for (int j = 0; j < 29; j++)
                m[i][j] = ' ';

        /* tabela com todas as posições */
        struct Matriz pontos[] = {
            {1, 1, '1'},

            {1, 5, '2'},

            {1, 11, '3'}, 

            {1, 16, '4'}, 

            {1, 21, '5'},

            {1, 25, '6'}, 

            {3, 2, 'A'}, {4, 2, 'B'}, {5, 2, 'C'},
        
            {3, 6, 'A'}, {3, 7, 'B'}, {3, 8, 'C'},
       
            {3, 12, 'A'}, {4, 11, 'B'}, {4, 13, 'C'},
    
            {3, 17, 'A'}, {4, 18, 'B'}, {5, 17, 'C'},

            {3, 22, 'A'}, {4, 21, 'B'}, {5, 22, 'C'},

            {4, 26, 'A'}, {3, 25, 'B'}, {3, 27, 'C'},

        };

        /* aplica os pontos */
        int total = sizeof(pontos) / sizeof(pontos[0]);

        for (int i = 0; i < total; i++) {
            m[pontos[i].linha][pontos[i].coluna] = pontos[i].valor;
        }

        /* imprime */
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 29; j++) {
                printf("%c ", m[i][j]);
            }
            printf("\n");
        }
    }

    if(a == 2){
         char m[7][100];

        /* limpa a matriz */
        for (int i = 0; i < 7; i++)
            for (int j = 0; j < 100; j++)
                m[i][j] = ' ';

        /* tabela com todas as posições */
        struct Matriz pontos[] = {
            {1, 1, '7'},

            {1, 7, '8'},

            {1, 13, '9'},

            {1, 22, '1'}, {1, 23, '0'},

            {1, 29, '1'},{1, 30, '1'},

            {1, 37, '1'}, {1, 38, '2'},

            {1, 42, '1'}, {1, 43, '3'},

            {1, 47, '1'}, {1, 48, '4'},

            {1, 52, '1'}, {1, 53, '5'},

            {3, 2, 'o'}, {4, 2, 'o'}, {5, 2, 'o'}, //7
            {3, 4, 'o'}, {4, 4, 'o'}, {5, 4, 'o'},

            {3, 8, 'o'}, {3, 9, 'o'}, {3, 10, 'o'}, //8
            {4, 8, 'o'}, {4, 9, 'o'}, {4, 10, 'o'},

            {3, 14, 'o'}, {4, 13, 'o'}, {4, 15, 'o'}, //9
            {3, 18, 'o'}, {4, 17, 'o'}, {4, 19, 'o'},

            {3, 22, 'o'}, {4, 23, 'o'}, {5, 22, 'o'}, //10
            {3, 26, 'o'}, {4, 25, 'o'}, {5, 26, 'o'},

            {3, 30, 'o'}, {4, 29, 'o'}, {5, 30, 'o'}, //11
            {3, 32, 'o'}, {4, 33, 'o'}, {5, 32, 'o'},

            {3, 38, 'o'}, {4, 37, 'o'}, {4, 39, 'o'}, //12
            {6, 38, 'o'}, {5, 37, 'o'}, {5, 39, 'o'},

            {3, 43, 'o'}, {4, 42, 'o'}, {4, 44, 'o'}, //13
            {5, 43, 'o'}, {6, 42, 'o'}, {6, 44, 'o'},

            {3, 47, 'o'}, {3, 49, 'o'}, {4, 48, 'o'}, //14
            {6, 47, 'o'}, {6, 49, 'o'}, {5, 48, 'o'},

            {3, 52, 'o'}, {3, 54, 'o'}, {3, 56, 'o'}, //15
            {3, 58, 'o'}, {3, 60, 'o'}, {3, 62, 'o'},
        };

        /* aplica os pontos */
        int total = sizeof(pontos) / sizeof(pontos[0]);

        for (int i = 0; i < total; i++) {
            m[pontos[i].linha][pontos[i].coluna] = pontos[i].valor;
        }

        /* imprime */
        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 100; j++) {
                printf("%c ", m[i][j]);
            }
            printf("\n");
        }
    }

    if(a == 3){
         
    }

    printf("Escolha o modelo: ");
    scanf("%d", &opcao);
    
    return opcao;
}