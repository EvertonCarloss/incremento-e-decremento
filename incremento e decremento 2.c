#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

int x = 5;
int y = 3 + x++;

printf("O resultado de x é %d e y é %d", x , y);


}
