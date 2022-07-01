#include "varGlobais.h"
//aqui não precisaremos de ponteiro pois apenas consultamos a tabela com os registros e os dados nos campos
void  pesquisarDados(int inseridos){

   int i;
   printf("\nPESQUISAR  DADOS");
   printf("\n-----------------------------");
   if(inseridos != 0){
    printf("\nOs dados inseridos foram:\n");
    printf("Código\t| Nome\t| Email:\n");
    for(int i=0; i<inseridos;i++){ 
    printf("-------------------------------\n"); 
    printf("%d\t\t| %s\t| %s\n", aluno[i].codigo, aluno[i].nome, aluno[i].email);
    }
  }else{
    printf("\nNão existe nenhum registro");
    printf("\n-----------------------------\n");
  }
    
  
}   