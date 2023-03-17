// Arquivo com todas as funções criadas

#include <stdio.h>
#include "intro_funcs.h"

int criar_lista(Lista *l){
    l->controle = -1;
    return 1;
}

int limpar_lista(Lista *l){
    l->controle = -1;
    return 1; 
}

void mostrar_lista(Lista *l){
    if (l->controle > -1){
        printf("\n");
        for (int i = 0; i < (l->controle + 1); i++){
            printf("%d ", l->dados[i]);
        }
    }
    else{
        printf("\nA lista esta vazia!");
    }
}

int remove_fim(Lista *l){
    if (l->controle == -1){
        return 0;
    }
    else{
        l->controle--;
        return 1;
    }
}

int insere_fim(Lista *l, int n){
    if (l->controle == (N - 1)){
        return 0;
    }
    else{
        l->controle++;
        l->dados[l->controle] = n;

        return 1;
    }
}

int remove_inicio(Lista *l){
    if (l->controle == -1){
        return 0;
    }
    else{
        for (int i = 0; i < l->controle; i++){
            l->dados[i] = l->dados[i+1];
        }

        l->controle--;

        return 1;
    }
}

int insere_inicio(Lista *l, int n){
    if (l->controle == (N - 1)){
        return 0;
    }
    else{
        for (int i = l->controle; i > -1; i--){
            l->dados[i+1] = l->dados[i];
        }

        l->dados[0] = n;
        l->controle++;

        return 1;
    }
}

void menu(){
    printf("-----------------------------");
    printf("\n            MENU\n");
    printf("-----------------------------");
    printf("\n1 - Para limpar a lista.");
    printf("\n2 - Para inserir elemento.");
    printf("\n3 - Para remover elemento.");
    printf("\n4 - Para mostrar toda lista.");
    printf("\n-----------------------------");
    printf("\nDigite a opcao que deseja: ");
}