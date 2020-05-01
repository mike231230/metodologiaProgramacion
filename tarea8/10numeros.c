#include <stdio.h>


int leerNumeros(int arre1[5], int arre2[5]);


int main() {
  int arre1[5];
  int arre2[5];
  int arre3[10];

  leerNumeros(arre1, arre2);

for (int l=0; l<10; l++){
    if(l < 5 ){
      arre3[l] = arre1[l];
    }else {
      arre3[l] = arre2[l-5];
    }



    printf("el numero es %d\n",arre3[l] );


}









  return 0;
}

int leerNumeros(int arre1[5], int arre2[5]){
  for (int i = 0; i <5; i++) {
    printf("dame un numero\n");
    scanf("%d",&arre1[i]);
  }
  for (int j = 0; j <5; j++) {
    printf("dame un numero\n");
    scanf("%d",&arre2[j]);
  }

}
