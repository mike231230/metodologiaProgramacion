#include <stdio.h>

int main() {
  double a,b,c;

  printf("dame un numero\n" );
  scanf("%lf",&a );
  printf("dame un numero\n" );
  scanf("%lf",&b );
  printf("dame un numero\n" );
  scanf("%lf",&c );

  if (a<b &&  a<c) {
    printf("el menor es %lf\n",a );
  }else{}
  if (b<a&&b<c) {
    printf("el menor es %lf\n",b );
  }else {}
  if (c<a && c<b) {
    printf("el menor es %lf\n",c );
  }else{}


  return 0;
}
