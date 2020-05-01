#include <stdio.h>

int main() {
  int a;
  int columna[6][24];
  int x,y;
  int decision;



  printf("los asientos son \n" );


  for (int k = 0 ; k <6; k++) {
  for(int i=0; i<24 ;i++){
    columna[k][i]=0;
  printf("|%d|",columna[k][i] );
}
printf("\n" );
}

do {
  printf("bienvenido al servicio de reserva elija una opcion \n" );
  printf("opcion 1: reservar \n" );
  printf("opcion 2: cancelar \n" );
  printf("opcion 3: salir\n" );
  scanf("%d",&a );
  switch (a) {
     case 1:
     printf("elije un asiento y fila \n" );
     printf("dame la fila \n");
     scanf("%d",&x );
     printf("dame la el asiento de la fila \n" );
     scanf("%d",&y );
     if(columna[x-1][y-1] != 1){
     columna[x-1][y-1]=1;

    }else{
      printf("el lugar ya esta ocupado\n" );
      break;
    }
     for (int k = 0 ; k <6; k++) {
     for(int i=0; i<24 ;i++){
     printf("|%d|",columna[k][i] );
     };
     printf("\n" );
     }
     break;

     case 2:
       printf("¿quieres cancelar tu viaje? 0= si 1= no \n" );
       scanf("%d",&decision );

       if (decision==0) {
         printf("Dame la fila\n");
         scanf("%d",&x );
         printf("Dame la columna\n" );
         scanf("%d",&y );
         columna[x-1][y-1]=0;
         printf("tu viaje ha sido cancelado \n" );
       }else{
         printf("gracias por seguir viajando con nosotros\n" );
       }
       for (int k = 0 ; k <6; k++) {
       for(int i=0; i<24 ;i++){
       printf("|%d|",columna[k][i] );


       };
       printf("\n" );
       }
       break;
     }




} while(a != 3);

return 0;
}
