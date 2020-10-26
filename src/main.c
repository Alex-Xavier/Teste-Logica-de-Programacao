#include <stdio.h>

int main (void) {
  char sexo;
  int quantidadeDigitado = -1, quantidadeMasculino = 0, quantidadeFeminino  = 0, porcentagemMulheres = 0;

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

    quantidadeDigitado += 1;
  } while (sexo != 10);

  porcentagemMulheres = quantidadeFeminino * 100 / quantidadeDigitado;

  printf("============================================================");
  printf("\n                        RESULTADO                        ");
  printf("\n============================================================\n\n");

  printf("Total de mulheres: %d \n", quantidadeFeminino);
  printf("Total de homens: %d \n", quantidadeMasculino);
  printf("Total digitado: %d \n\n", quantidadeDigitado);

  if (porcentagemMulheres > 10) {
    printf("Aviso: total de mulheres corresponde a %d", porcentagemMulheres);
    printf("%%");
    printf(" do total digitado.\n\n");
  }

  return 0;
}