#include <stdio.h>

int main() {
  int array[5];
  for (int i = 0; i < 5; i++) {
    printf("dame un numero \n" );
    scanf("%d",&array[i] );
  }

if (array[0]==array[4]) {
  for (int i = 1; i < 4; i++) {
    array[i]=1;

  }
}else{
  for (int i = 1; i < 4; i++){
    array[i]=0;

  }
}
for (int i = 0; i < 5; i++) {
  printf("%d,",array[i] );
}
printf("\n" );

  return 0;
}
