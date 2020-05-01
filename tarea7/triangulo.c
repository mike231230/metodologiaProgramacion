#include <stdio.h>

int main() {
  int li,ld,lb;
  printf("dame el lado izquierdo \n" );
  scanf("%i",&li );
  printf("dame el lado derecho \n");
  scanf("%i",&ld );
  printf("dame la base \n" );
  scanf("%i",&lb );
  if (ld==li&&ld==lb) {
    printf("el triangulo es equilatero \n");
}
    else if (ld==li&& ld!=lb){
    printf("el triangulo es isoseles \n");
  }
    else if (ld!=li&&ld!=lb){
    printf("el triangulo es escalenno \n");
  }
    else if(ld==0|| lb==0|| li==0){
    printf("los datos ingresados no forman un triangulo\n");
  }
  else{

  }

  return 0;
}
