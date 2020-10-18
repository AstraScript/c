#include <stdio.h>

int main(void) {
  
int av1 = 0;
int av2 = 0;
int resul = 0;

//calcular nota e ver se passou

printf("Digite a nota 1: ");
scanf("%d", &av1);

printf("Digite a nota 2: ");
scanf("%d", &av2);

resul = (av1 + av2) /2;

printf("O aluno tirou nota %d\n", resul);