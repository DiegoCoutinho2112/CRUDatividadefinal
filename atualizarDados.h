#include "varGlobais.h"
//aqui não precisaremos mexer no valor da variável, apenas trocar por outros, então não necessita ponteiro
void atualizarDados(int inseridos){

  int i, atualizar;
  printf("\nATUALIZAR DADOS");
  printf("\n-----------------------------\n");
  if(inseridos != 0){
    printf("\nOs dados inseridos foram:\n");
    printf("\nCódigo\t| Nome\t| Email:\n");
    for( i=0; i<inseridos;i++){ 
      printf("-------------------------------\n");
      printf("%d\t\t| %s\t| %s\n", aluno[i].codigo, aluno[i].nome, aluno[i].email);
    }
    printf("\nQual linha deseja ATUALIZAR? ");
    scanf("%d",&atualizar);
    if (atualizar < inseridos){
      printf("\n Insira dados \n");
      printf("\n Digite codigo:");
      scanf( "%i", &aluno[atualizar].codigo);
      printf("\n Digite nome:");
      scanf( "%s", aluno[atualizar].nome);
      printf("\n Digite email:");
      scanf( "%s", aluno[atualizar].email); 
      printf("\n Atualizado com sucesso !!!\n\n" );
    }
    else{
      printf("\nLinha Não EXISTE!!!!!\n\n");
    }
    
  }
  else{
    printf("\nNão existe nenhum registro");
  }
  
  
}