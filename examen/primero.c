#include <stdio.h>

int main() {
  int array2[11];
  int array3[11];

  for (int i = 1; i <11; i++) {
array2[i]=i*2;
  printf("%d\n",array2[i] );
    }
for (int k = 1; k <11 ; k++) {
  array3[k]=k*3;

  printf("%d\n",array3[k] );
}


  return 0;
}
