#pragma once
//uso único de variável nas seleções do menu
#include "varGlobais.h"

int menu(int opcao){
  printf("\nPROGRAMA CRUD");
  printf("\n-----------------------------");
  printf("\nMenu de opcoes APP CRUD\n");
  printf("\n-----------------------------");
  printf("\n 1 - Inserir dados");
  printf("\n 2 - Pesquisar dados");
  printf("\n 3 - Atualizar dados");
  printf("\n 4 - Apagar dados");
  printf("\n 0 - Terminar");
  printf("\n-----------------------------\n");
  printf("\n        Sua opcao:  ");
  scanf(" %i", &opcao);
  printf("\n-----------------------------\n");
  return opcao;
}