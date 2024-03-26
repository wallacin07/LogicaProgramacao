#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
int main()
{
int erros = 0 ;
graficos(erros);
    char n;    
    // printf("%d", sizeof(words[0]) / sizeof(words[0]) - 1);
    printf("Digite uma letra: ");
    n = getchar();
    n = toupper(n);
    guess(n);


return 0;
}

void guess(char n)
{
    srand(time(NULL));
    char words[10][15] = {"ALEMANHA", "BRASIL", "ESPANHA", "INGLATERRA", "CHILE", "CANADA", "CHINA", "RUSSIA", "IRLANDA", "COLOMBIA"};
    char *randword = words[rand()% 10];
    printf("%s", randword);
    int tamanho = strlen(randword);
        for(int i=0;i < tamanho;i++)
        {
            if (n == randword[i])
            {
                printf("\nA letra esta na posição: %i", i+1);
                // return i;
            }
            // return 0;
        }
}

void graficos(int erros)
{
    if (erros == 0)
    printf(" _____\n|     |\n|\n|\n|__________________________________________________");
    if (erros == 1 )
        printf(" _____\n|     |\n|     O\n|\n|__________________________________________________");
    if (erros == 2 )
        printf(" _____\n|     |\n|     O\n|     |\n|__________________________________________________");
    if (erros == 3 )
        printf(" _____\n|     |\n|     O\n|    /|\n|\n|\n|_______________________");
    if (erros == 4 )
        printf(" _____\n|     |\n|     O\n|    /|\\\n|\n|\n|______________");
    if (erros == 5 )
        printf(" _____\n|     |\n|     O\n|    /|\\\n|    /\n|\n|_________________________");
    if (erros == 6 )
        printf(" _____\n|     |\n|     O\n|    /|\\\n|    / \\\n|\n|_________________");
}

// void palavrasecreta(char randword,int tamanho)
// {
//     if (tamanho == 7){
//     char secreto[8] = "_______";
//     }
//         if (tamanho == 5){
//     char secreto[6] = "_____";
//     }
//         if (tamanho == 10){
//     char secreto[11] = "__________";
//         }
//         if (tamanho == 6){
//     char secreto[7] = "______";
//     }
//             if (tamanho == 8){
//     char secreto[9] = "________";
//             }
//                     if (tamanho == 9){
//     char secreto[10] = "_________";
//                     }


// }