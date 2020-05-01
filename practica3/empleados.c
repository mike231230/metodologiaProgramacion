#include <stdio.h>
#include "milibreria.h"



int main() {
  int n;


  printf("dame el numero de empleados \n" );
  scanf("%d",&n );



  struct empleados {
    float valorh;
    char nombre[20];
    float antiguedad;
    float horast;
    float sueldo;
    float impuestos;
    float bruto;
  };
  struct empleados empleado [n];
  for (int i = 0; i < n; i++) {
  printf("nombre del empleado: \n" );
  leestring(empleado[i].nombre, 20);
  printf("ingresa el valor hora \n" );
  scanf("%f",&empleado[i].valorh );
  printf("años trabajando \n" );
  scanf("%f",&empleado[i].antiguedad );
  printf("horas trabajadas al mes \n" );
  scanf("%f",&empleado[i].horast );

}
for (int j = 0; j< n; j++) {
  empleado[j].sueldo=empleado[j].horast * empleado[j].valorh;
  empleado[j].bruto=empleado[j].sueldo + (empleado[j].antiguedad * 60.50);
  empleado[j].impuestos=empleado[j].bruto * .21;
  empleado[j].sueldo=empleado[j].bruto - empleado[j].impuestos;

  printf("nombre: %s años: %.2f  valor h: %.2f sueldo bruto: %.2f impuestos: %.2f sueldo: %.2f\n",empleado[j].nombre,empleado[j].antiguedad,empleado[j].valorh, empleado[j].bruto, empleado[j].impuestos, empleado[j].sueldo );
}

  return 0;
}
