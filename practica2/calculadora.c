#include <stdio.h>

int main() {
  int a;
  int x;
  int y;
  int resul;

  printf("que operacion quieres hacer \n" );

  printf("para suma = 1 \n" );

  printf("para resta =2 \n" );
  printf("para multiplicacion =3 \n" );
  printf("para division =4 \n" );
  printf("para el modulo = 5 \n" );
  printf("\n\n" );
      scanf("%d",&a );
      switch (a) {
        case 1:
        printf("dame el primer numero \n" );
        scanf("%d",&x );
        printf("dame el segundo numero\n" );
        scanf("%d",&y );
        resul= x+y;
        printf("la suma de %d+%d es igual a: %d\n",x,y,resul );
        break;
        case 2:
        printf("dame el primer numero \n" );
        scanf("%d",&x );
        printf("dame el segundo numero\n" );
        scanf("%d",&y );
        resul= x-y;
        printf("la resta de %d-%d es igual a: %d\n",x,y,resul );
        break;

        case 3:
        printf("dame el primer numero \n" );
        scanf("%d",&x );
        printf("dame el segundo numero\n" );
        scanf("%d",&y );
        resul= x*y;
        printf("la multiplicacion de %d*%d es igual a: %d\n",x,y,resul );
        break;
        case 4:
        printf("dame el primer numero \n" );
        scanf("%d",&x );
        printf("dame el segundo numero\n" );
        scanf("%d",&y );
        resul= x/y;
        printf("la division de %d/%d es igual a: %d\n",x,y,resul );
        break;

        case 5:
        printf("dame el primer numero \n" );
        scanf("%d",&x );
        printf("dame el segundo numero\n" );
        scanf("%d",&y );
        resul= x % y;
        printf("el modulo de %d  %d es igual a: %d\n",x,y,resul );
        break;
        default:;
      }

  return 0;
}
