#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arre[10];
  int arr[10];
  for (int i = 0; i <10; i++) {
    printf("dame un numero\n" );
    scanf("%d",&arre[i] );
  }for (int j = 0; j <10; j++) {
    arr[j]=arre[j]*3;
    printf("el numero del arreglo es %d\n",arr[j] );
  }








  return 0;
}
