#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#define NUM 4

struct pessoa
{
    char nome[20];
    char mae[20];
    char pai[20];
    int idade;
};
typedef struct pessoa Pessoa;

void mostra_pessoa(Pessoa*); // mostra na tela 1

int main()
{
    Pessoa p[8] =
    {
        { "0","a","b", 30 }, // 0
        { "1","c","d", 30 }, // 1
        { "2","e","f", 30 }, // 2
        { "3","g","h", 30 }, // 3
        { "4","1","0", 20 }, // 4
        { "5","3","2", 20 }, // 5
        { "6","5","4",  2 }  // 6
    };
    Pessoa irmaoDo6 = { "7","5","4",  7 };  // irmao do 6
    p[7] = irmaoDo6;

    int tamanho_da_familia = 8; // 2 casais, 2 netos 2 irmaos

    for (int i = 0; i < 8; i += 1)
    {
        printf("Pessoa: nome: %s pai: %s mae %s idade = %d\n",
            p[i].nome, p[i].pai, p[i].mae, p[i].idade);
    };  // for()

    // procura os irmaos e mostra tambem o irmao mais novo,
    // aos pares
    for (int A = 0; A < tamanho_da_familia; A += 1)
    {
        for (int B = 0; B < tamanho_da_familia; B += 1)
            if (A != B)
                if (
                    (strcmp(p[A].pai, p[B].pai) == 0) ||
                    (strcmp(p[A].mae, p[B].mae) == 0)
                    )
                {   // sao irmaos. tem o lance da idade
                    printf("%s e irmao de %s\n",
                        p[A].nome, p[B].nome);
                    if (p[A].idade < p[B].idade)
                        printf("%s e o mais novo\n",
                            p[A].nome);
                    else // B e o mais novo entao
                        printf("%s e o mais novo\n",
                            p[B].nome);
                };  // if()
    };  // for()

    // agora os avos
    for (int A = 0; A < tamanho_da_familia; A += 1)
    {
        for (int B = 0; B < tamanho_da_familia; B += 1)
        {
            if (A != B) // nao reflexivo
            {
                if (
                    (strcmp(p[A].nome, p[B].pai) == 0) ||
                    (strcmp(p[A].nome, p[B].mae) == 0)
                    ) // B e filho de A
                {
                    for (int C = 0; C < tamanho_da_familia; C += 1)
                    {
                        if ((C != B) && (C != A)) // 3 geracoes
                        {
                            if (
                                (strcmp(p[B].nome, p[C].pai) == 0) ||
                                (strcmp(p[B].nome, p[C].mae) == 0)
                                ) // C e filho de B
                            {
                                printf("%s e neto de %s\n",
                                    p[C].nome, p[A].nome);
                            }
                        }
                    };  // for()
                }
            }
        }
    };  // for()
};

void mostra_pessoa(Pessoa* P)
{
    printf("Pessoa: nome: %s pai: %s mae %s idade = %d\n",
        P->nome, P->pai, P->mae, P->idade);
};

// fim ch 1464425
