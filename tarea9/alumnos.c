#include <stdio.h>
#include "milibreria.h"


int main() {
int a;
float d;
char b;
int pos;
  struct persona {
    char nombre[25];
    int edad;
    float estatura;
  };
struct persona datos[5];
for (int i=0 ; i< 5 ; i++){
printf("dame el nombre de la persona \n" );
leestring(datos[i].nombre, 25);
printf("dame la edad \n" );
scanf("%d",&datos[i].edad );
printf("dame la estatura en metros \n" );
scanf("%f",&datos[i].estatura);


}
printf("dame el numero de la persona que quieres ver sus datos 1-5 \n" );
scanf("%d",&a );
a=a-1;
printf("\n\n" );
printf("los datos de la  persona son nombre %s edad %d estatura %f\n",datos[a].nombre, datos[a].edad, datos[a].estatura );




for(int k=0 ;k< 5;k++){
  if (k+1 < 5){
      if (datos[k].edad <  datos[k+1].edad){
    pos=k+1;
  }


  }
printf("%i",pos );



}
printf("el mayor es %s con la edad de %d\n",datos[pos].nombre,datos[pos].edad );


  return 0;
}
