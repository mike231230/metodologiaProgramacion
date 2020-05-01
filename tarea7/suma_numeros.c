#include <stdio.h>


int main() {
int n;
int suma=0;

printf("si quieres que el programa termine oprime 0\n");

do {
  printf("dame un numero\n");
  scanf("%i",&n );
  suma=suma+n;


} while(n>0);
printf("el resultado es: %i\n",suma);



  return 0;
}
