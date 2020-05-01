#include <stdio.h>
#include "milibreria.h"



int main() {
  char palabra[10];
  int a=0;

  printf("dame una palabra \n" );

  leestring(palabra,10);


 for (int i = 0; i < 10; i++) {
  if (palabra[i]>=65 && palabra[i]<=90 ) {
      a++;
    }
  }

printf("%d\n",a );



  return 0;
}
