#include <stdio.h>

int main() {
  int n;
  struct fecha{
    int annio;
    int mes;
    int dia;

  };
  struct fecha edad[1];

  printf("dame el año mes y dia de nacimiento \n" );
  scanf("%d",&edad[0].annio );
  scanf("%d",&edad[0].mes );
  scanf("%d",&edad[0].dia );

  printf("%d / %d / %d \n",edad[0].annio, edad[0].mes, edad[0].dia );
if (edad[0].annio>=1900&&edad[0].dia<=31 && edad[0].mes<=12){
  if (edad[0].mes<=11 && edad[0].dia<=10){
          n=2018 - edad[0].annio;
      printf("la edad es %d\n",n );

  }else {
    n=2017 - edad[0].annio;
    printf("la edad es %d\n",n );

}
}else{printf("no es posible calcular edad\n" );}









  return 0;
}
