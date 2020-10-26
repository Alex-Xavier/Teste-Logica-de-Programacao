#include <stdio.h>

int main (void) {
  char sexo;
  int quantidadeMasculino = 0, quantidadeFeminino  = 0, porcentagemMulheres;

  do {
    printf("============================================================");
    printf("\n                    DESAFIO AIX SISTEMAS                    ");
    printf("\n============================================================\n\n");

    printf("**Para finalizar digite apenas ENTER**\n\n");

    printf("Digite o sexo dos alunos (M / F): ");
    scanf("%c", &sexo);
    getchar();

    if (sexo == 'M' || sexo == 'm') {
      quantidadeMasculino += 1;
    } else if (sexo == 'F'  || sexo == 'f') {
      quantidadeFeminino += 1;
    }

    system("clear");
  } while (sexo != 10);

  return 0;
}