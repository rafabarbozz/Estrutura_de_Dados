// Arquivo com todos os protótipos das funções

#ifndef SIMPLES_FUNCS_H
#define SIMPLES_FUNCS_H

struct no{
    int valor;
    struct no *prox;
};

void menu();

int criar_lista(struct no **ll);

void mostra_lista(struct no *ll);

int inserir_inicio(struct no **ll, int num);

int inserir_fim(struct no **ll, int num);

int limpa_lista(struct no **ll);

int remover_inicio(struct no **ll);

int remover_fim(struct no **ll);

int destrutor(struct no **ll);

#endif
