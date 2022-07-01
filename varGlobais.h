#pragma once
#include <stdio.h>
//definir constantes do vetor de 3 registros ao todo
#define TAMNOME 15
#define TAM 3

//struct dos dados que compõem os registros
struct cadastro{
  int codigo;
  char nome[TAMNOME];
  char email[TAMNOME];
};

struct cadastro aluno[TAM];