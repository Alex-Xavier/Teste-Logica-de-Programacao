#include <stdio.h>

int main (void) {
  char sexo;
  int quantidadeMasculino = 0, quantidadeFeminino  = 0, porcentagemMulheres;

  while (sexo != 10) {
    printf("============================================================");
    printf("\n                    DESAFIO AIX SISTEMAS                    ");
    printf("\n============================================================\n\n");

    printf("Digite o sexo dos alunos: ");
    scanf("%c", &sexo);
    getchar();

    system("clear");
  }

  return 0;
}