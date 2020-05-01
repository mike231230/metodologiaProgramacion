#include <stdio.h>

int main() {

int x=0;
int y=0;
int n,resultado;

printf("escribe el primer numero\n" );
scanf("%i",&x);
printf("escribe el segundo numero\n");
scanf("%i",&y);

printf("el primer numero es: %i\n",x );

printf("el segundo numero es: %i\n",y );

n=(x>y)?x:y;

printf("el mayor es:  %i\n",n );
resultado=x*y;
printf("la multiplicacion es: %i\n",resultado);

return 0;


}
