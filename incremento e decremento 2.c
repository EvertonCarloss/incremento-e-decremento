#include <stdio.h>
#include <locale.h>

void main () {

setlocale(LC_ALL,"Portuguese");

int x = 5;
int y = 3 + x++;

printf("O resultado de x � %d e y � %d", x , y);


}
