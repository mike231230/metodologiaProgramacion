#include <stdio.h>



int main() {
  int  contador=0;
  int arre[100];
  int x=0;
  int num=0;
  int i=0;

// for ( i = 0; i <=100; i++) {
//   arre[i]=num++;
//
// }for (i=0; i <100 ; i++) {
//   for (x = 1; x <=i; x++) {
//     if (i%x==0){
//     contador++;
//
//
//   if (contador==2) {
//     printf("%d \n",arre[i] );
//   }else{}
// }else{}
// }
// }

int j = 0;
for( i = 1; i<=100; i++){
  if(i/i == 1 && i/1 == i){
    int z = i+1;

    if(i/z == 1){
      arre[j]=i;
      j++;
    }else{}


  }else {}
}
printf("j es: %i\n",j );

 for (int i =0; i < j ;i++) {
   printf("El numero %i es :%i\n",i,arre[i]);
 }





  return 0;
}
