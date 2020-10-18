#include <stdio.h>

int main(){

int n1 = 0, n2 = 0;

printf("Digite um numero e eu digo se é Par: ");
scanf("%d", &n1);

if(n1 % 2 == 0){
    printf("Numero é par");
}
else{
    printf("Numero é impar");
}

}