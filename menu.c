#include <stdio.h>
#include <stdlib.h.>
#include <string>
#include <iostream>

int main(){

int opcao;

printf("Escolha uma opção \n");
printf("Opção 1 \n");
printf("Opção 2 \n");
printf("Opção 3 \n");

scanf("%d", &opcao);

switch(opcao){
     case 1:
       printf("\n Opçao 1 foi escolhida");
       break;

        case 2:
       printf("\n Opçao 2 foi escolhida");
       break;

        case 3:
       printf("\n Opçao 3 foi escolhida");
       break;

        default:
       printf("\n Opçao inválida");
       break;
}

system("pause");


}