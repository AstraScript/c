#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Programa que soma dois numeros \n");

  int nu1 = 0, nu2 = 0, resultado = 0;

  printf("Digite um numero: ");
  scanf("%d", &nu1);

  printf("Digite outro numero: ");
  scanf("%d", &nu2);

  resultado = nu1 + nu2;

  printf("O resultado é: %d", resultado);

}