#include <stdio.h>
#include  "milibreria.h"
int main() {
  int n=0;
  printf("cuantos alumos piensas capturar\n");
  scanf("%d",&n );
  struct alumno{
    char cedula[6];
    char nombre[20];
    char apellido[10];
    int edad;
    char lugar[20];
    char direccion[30];
    int telefono;
  };
  struct alumno alumnos [n];
  printf("%d\n",n );
  for (int i = 0; i <=n; i++) {
    printf("dame el numero de cuenta\n" );
    leestring(alumnos[i].cedula,6);
    printf("dame el nombre del alumno\n" );
    leestring(alumnos[i].nombre,20);
    printf("dame el apellido\n" );
    leestring(alumnos[i].apellido,10);
    printf("dame la edad\n" );
    scanf("%d",&alumnos[i].edad);
    printf("lugar de nacimiento\n" );
    leestring(alumnos[i].lugar, 20 );
    printf("direccion\n" );
    leestring(alumnos[i].direccion,30 );
    printf("telefono\n" );
    scanf("%d",&alumnos[i].telefono );
    printf("\n \n" );

  } for (int j = 0; j <=n; j++) {
    printf("apellido: %s\n ",alumnos[j].apellido );
    printf("nombre %s\n",alumnos[j].nombre );
    printf("cedula: %s\n ",alumnos[j].cedula );
    printf("edad %d\n",alumnos[j].edad );
    printf("lugar de nacimiento: %s\n ",alumnos[j].lugar );
    printf("direccion %s\n",alumnos[j].direccion );
    printf("telefono: %d\n ",alumnos[j].telefono );
    printf("\n\n");



  }






  return 0;
}
