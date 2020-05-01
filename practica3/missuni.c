#include <stdio.h>
#include "milibreria.h"

int main() {
int pos,poss;
int n;
  printf("dame el numero de participantes \n" );
  scanf("%d",&n );

  struct participante {
    int edad;
    char id[6];
    char nombre[10];
    char apellido[10];
    float inteligencia;
    float cultura;
    float belleza;
    float traje;
    float total;
  };
  struct participante miss [n];

  for (int i = 0; i < n; i++) {
    printf(" ID de la participante \n" );
    leestring(miss[i].id,6 );
    printf(" Nombre de la participante \n" );
    leestring(miss[i].nombre,10 );
    printf(" Apellido de la participante \n" );
    leestring(miss[i].apellido,10 );
    printf("puntos por inteligencia\n" );
    scanf("%f",&miss[i].inteligencia );
    printf("puntos por cultura \n" );
    scanf("%f",&miss[i].cultura );
    printf("puntos por belleza \n" );
    scanf("%f",&miss[i].belleza );
    printf("prueba traje de baño\n" );
    scanf("%f",&miss[i].traje );

  }
for (int j = 0; j < n; j++) {
  miss[j].total= miss[j].inteligencia + miss[j].cultura + miss[j].belleza + miss[j].traje ;
  printf("ID: %s nombre: %s %s total: %.2f \n",miss[j].id, miss[j].nombre, miss[j].apellido, miss[j].total );
}
for(int l=0; l<n ; l++){
if (l+1<n) {
      if(miss[l].total<miss[l+1].total){
        pos= l+1;
  }else {
    pos=l;
  }
   }

if (l+1<n){
  if(miss[l].total<miss[l+1].total){
          poss= l;
    }else {
      poss=l+1;
    }
}
}
printf("la chica con mayor puntaje es :%s %s total: %.2f\n",miss[pos].nombre,miss[pos].apellido,miss[pos].total  );
printf("la chica con menor puntaje es :%s %s total: %.2f\n",miss[poss].nombre,miss[poss].apellido,miss[poss].total  );
for (int k = 0; k < n; k++) {
  if (k+1<n) {
      if(miss[k].total<miss[k+1].total){
        pos= k+1;
  }else {
    pos=k;
  }

}
}
printf("el id con mayor puntaje es :%s\n",miss[pos].id ); 



  return 0;
}
