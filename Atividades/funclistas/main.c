#include <stdio.h>
#include <string.h>
#include "funcs.h"

int main(){
    int opcao;
    Lista l1;

    menu();
    scanf("%d", &opcao);

    // Verificando se a opção inserida é válida
    while (opcao < 1 || opcao > 4){
        printf("Codigo inexistente.");
        printf("\n\nDigite novamente a opcao que deseja: ");
        scanf("%d", &opcao);
    }
    printf("-----------------------------");

    // Criando lista
    criar_lista(&l1);

    // Chamando função para limpar lista
    if (opcao == 1){
        limpar_lista(&l1);
        printf("\nLista limpada com sucesso!");
    }
    
    // Funções para inserir elemento no inicio ou no final
    else if(opcao == 2){
        int continuar = 1;

        // Variável "continuar" pergunta se a pessoa deseja continuar inserindo elemento
        while (continuar == 1){
            if (l1.cti == l1.ctf + 1){ // Verificar se a lista está cheia
                printf("\nA lista esta cheia! Nao foi possivel continuar.");
                break;
            }
            else if(l1.cti == 0 && l1.ctf == N){
                printf("\nA lista esta cheia! Nao foi possivel continuar.");
                break;
            }
            else{
                int posicao, elemento;

                printf("\nEscolha uma opcao:\n");
                printf("\n1 - Para colocar no inicio.");
                printf("\n2 - Para colocar no final.");    
                printf("\n-----------------------------");
                printf("\nDigite a opcao que deseja: ");
                scanf("%d", &posicao);
                while (posicao < 1 || posicao > 2){
                    printf("\nCodigo inexistente.\n");
                    printf("\n1 - Para colocar no inicio.");
                    printf("\n2 - Para colocar no final.");    
                    printf("\n-----------------------------");
                    printf("\nDigite novamente a opcao que deseja: ");
                    scanf("%d", &posicao);
                }
                printf("-------------------------------------");

                // Inserir elemento no começo
                if (posicao == 1){
                    printf("\nQual elemento voce deseja inserir: ");
                    scanf("%d", &elemento);
                    inserir_inicio(&l1, elemento);
                    printf("-------------------------------------");
                }

                // Inserir elemento no final
                else if (posicao == 2){
                    printf("\nQual elemento voce deseja inserir: ");
                    scanf("%d", &elemento);
                    inserir_fim(&l1, elemento);
                    printf("-------------------------------------");
                }

                printf("\nDeseja continuar inserindo elementos(1 para sim e 0 para nao): ");
                scanf("%d", &continuar);
                printf("\n-----------------------------------------------------------------");

                // Validação da opção continuar
                while (continuar != 0 && continuar != 1){
                    printf("Opção inválida! Tente novamente.");
                    printf("\nDeseja continuar inserindo elementos(1 para sim e 0 para nao): ");
                    scanf("%d", &continuar);
                    printf("\n-----------------------------------------------------------------");
                }
            }
        }
    }

    // Funções para remover elemento no inicio ou no final
    else if(opcao == 3){
        int continuar = 1;

        // Variável "continuar" pergunta se a pessoa deseja continuar inserindo elemento
        while (continuar == 1){
            if (l1.cti == -1  && l1.ctf == -1){ // Verificar se a lista está vazia
                printf("\nA lista esta vazia! Nao foi possivel continuar.");
                printf("\n-----------------------------------------------");
                break;
            }
            else{
                int posicao, elemento;

                printf("\nEscolha uma opcao:\n");
                printf("\n1 - Para remover do inicio.");
                printf("\n2 - Para remover no final.");    
                printf("\n-----------------------------");
                printf("\nDigite a opcao que deseja: ");
                scanf("%d", &posicao);
                while (posicao < 1 || posicao > 2){
                    printf("Codigo inexistente.\n");
                    printf("\n1 - Para remover do inicio.");
                    printf("\n2 - Para remover no final.");    
                    printf("\n-----------------------------");
                    printf("\n\nDigite novamente a opcao que deseja: ");
                    scanf("%d", &posicao);
                }
                printf("----------------------------");

                // Inserir elemento no começo
                if (posicao == 1){
                    remover_inicio(&l1);
                    printf("-------------------------------------");
                }

                printf("\nDeseja continuar removendo elementos(1 para sim e 0 para nao): ");
                scanf("%d", &continuar);
                printf("-----------------------------------------------------------------");

                // Validação da opção continuar
                while (continuar != 0 && continuar != 1){
                    printf("\nOpcao invalida! Tente novamente.");
                    printf("\nDeseja continuar removendo elementos(1 para sim e 0 para nao): ");
                    scanf("%d", &continuar);
                    printf("\n-----------------------------------------------------------------");
                }
            }
        }
    }

    
    if (l1.ctf != -1 && l1.cti != -1){
        printf("\nA lista ficou: ");
        mostrar_lista(&l1);
        printf("\nCTI %d    CTF %d", l1.cti, l1.ctf);
    }    

    return 0;
}
