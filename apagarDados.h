#include "varGlobais.h"
//como vamos apagar o valor da variável, usaremos ponteiro pra referir aos dados inseridos
int apagarDados(int *inseridos){


  int i, apagar;
  printf("\nAPAGAR DADOS");
  printf("\n-----------------------------\n");
  if(*inseridos != 0){
    printf("\nOs dados inseridos foram:\n");
    printf("\nCódigo\t| Nome\t| Email:\n");
    for( i=0; i < *inseridos; i++){ 
      printf("-------------------------------\n");
      printf("%d\t\t| %s\t| %s\n", aluno[i].codigo, aluno[i].nome, aluno[i].email);
    }
      printf("\nQual linha deseja APAGAR? ");
      scanf(" %d", &apagar);
      if (apagar < *inseridos){
        for(i = apagar; i < *inseridos-1 ; i++){
          aluno[i] = aluno[i+1];//L.I.F.O. a cada linha que apaga...
        }
      *inseridos = *inseridos - 1;//... as inferiores sobem e abrem espaco na última linha do BD
       printf("\nLinha apagada!!!!!\n\n");
      }
      else{
      printf("\nLinha Não EXISTE!!!!!\n\n");
       }
  }else{
    printf("\nNão existe nenhum registro");
  }
  


  return *inseridos;
}