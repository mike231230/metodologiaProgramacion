#include <stdio.h>

int main() {
const double pi= 3.1416;

 float rad;
 float perimetro;
 float area;

printf("dame el radio\n");
scanf("%f",&rad);

area= pi*(rad*rad);
  perimetro= (rad*2)*pi;
printf("el area del circulo es: %f\n",area);
printf("el perimetro es: %f\n",perimetro);

  return 0;
}
