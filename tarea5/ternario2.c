#include <stdio.h>
int main() {
  int n;
  int r;
  int rs;
  int l;
printf("dame un numero\n");
scanf("%i",&n);
rs= n % 2;
  l=(rs==0)?printf("el numero es par %i\n",n ):printf("el numero es impar %i\n",n );
r= n*10;
r=r/2;
printf("el resultado es: %i\n",r );

  return 0;
}
