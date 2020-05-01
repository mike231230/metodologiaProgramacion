#include <stdio.h>

int main() {
int a,b,c;
  printf("dame un numero\n" );
  scanf("%d",&a );
  printf("dame un numero\n" );
  scanf("%d",&b );
  printf("dame un numero\n" );
  scanf("%d",&c );

if (c==a+b) {
printf("el numero %d es igual a la suma de los numeros %d y %d\n",c,a,b );
} else {
  printf("los numeros sumados no dan igual al tercero \n" );
}



  return 0;
}
