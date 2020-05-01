#include <stdio.h>

int main() {
  int array1[5];
  int pos;
  for (int i = 0; i < 5; i++) {
    printf("dame un numero \n" );
    scanf("%d",&array1[i] );
  }

for (int i = 0 ;i < 5 ;i++) {
  if (array1[i]==0 || array1[i]==1 && array1[i]<2){

  }else{

    return 1;
  }
}
printf("el arreglo es \n" );
for (int i = 0; i < 5; i++) {
  printf(" %d,",array1[i] );
}
printf("\n" );
  return 0;
}
