#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand((unsigned)time(NULL));

int aleatorio = rand() % 10;

printf("%d", aleatorio);

system("pause");

}
}