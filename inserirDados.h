#include "varGlobais.h"

int inserirDados(int *inseridos){
  printf("\nINSERIR DADOS");
  printf("\n-----------------------------\n");
  //uso de ponteiro para manipular o valor da variável de dados inseridos
  if ( *inseridos < TAM ){
    printf("\n Digite codigo:  ");
    scanf( "%i", &aluno[*inseridos].codigo);
    printf("\n Digite nome:   ");
    scanf( "%s", aluno[*inseridos].nome);
    printf("\n Digite email:   ");
    scanf( "%s", aluno[*inseridos].email); 
    *inseridos = *inseridos + 1;
    printf("\n Insercao ok. N.Inseridos : %i \n", *inseridos); 
  } 
  else{
      printf("\n Sinto muito. Limite alcançado para o banco de dados\n");// sem espaço na tabela
    }
  
  return *inseridos;
  
}