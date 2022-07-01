#include "varGlobais.h"
#include "menu.h";
#include "inserirDados.h"
#include "pesquisarDados.h"
#include "atualizarDados.h"
#include "apagarDados.h"

int main(void) {
  
  int opcao, inseridos;
  inseridos = 0; //variavel para controle acesso ao conteudo dos vetores da struct
  do {
      opcao = menu(opcao);
      switch ( opcao ){
        case 0 :
          break; 
        case 1 :
          inserirDados(&inseridos);  // funcao Create
          break;
        case 2 :
          pesquisarDados(inseridos);  // funcao Read
          break;
        case 3 : 
          atualizarDados(inseridos);  // Update
          break;
        case 4 :
          apagarDados(&inseridos);  // Delete
          break;
        default :
          printf("\nOpcao invalida!\n");
          break;
      }
    
    } while( opcao != 0);
  
  return 0;
  }