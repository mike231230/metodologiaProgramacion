#include <stdio.h>

 int main() {

int promedio=0;
int num=0;
int resultado=0;
int contador=1;
do {
  printf("dame un numero \n");
  scanf("%d",&num);
  resultado=resultado+num;
  contador++;
}while (contador <=10);
promedio=resultado/10;
printf("el resultado de los numeros sumados es: %d\n",resultado);
printf("la media es: %d\n",promedio);

  return 0;
}
