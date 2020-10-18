#include <stdio.h>
#include <stdlib.h>

int main(){

printf("Farei A - B e mostarei se o resultado é negativo ou possitivo, @Alan");

float a = 0.0f, b = 0.0f;
float c = 0.0f;

printf("Digite um numero: ");
scanf("%f", &a);

printf("Digite outro numero: ");
scanf("%f", &b);

c = a - b;

if(c <= -1){
  printf("O Numero %f é Negativo", c);
}
else{
  printf("O Numero %f é possitivo", c);
}

}