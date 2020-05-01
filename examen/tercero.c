#include <stdio.h>
#include "lib.h"

int main() {

int consola[3];
int pos;
  struct videojuegos {
    char nombre[20];
    float precio;
  };
  struct videojuegos videojuego [3] ;
for (int i =0;  i <3; i++) {
  printf("dame el nombre de la consola\n" );
  leestring(videojuego[i].nombre, 20 );
  printf("damel el precio de la consola\n" );
  scanf("%f",&videojuego[i].precio );


}
if (videojuego[0].precio<videojuego[1].precio && videojuego[0].precio<videojuego[2].precio) {
  pos=0;
}else{}
if (videojuego[1].precio<videojuego[2].precio && videojuego[1].precio<videojuego[0].precio ){
  pos=1;
}else{}
if (videojuego[2].precio<videojuego[0].precio&& videojuego[2].precio<videojuego[1].precio) {
  pos =2;
}else {}






printf("%d\n",pos );
printf("la consola mas barata es : %s con el precio %.2f\n",videojuego[pos].nombre,videojuego[pos].precio );


  return 0;
}
