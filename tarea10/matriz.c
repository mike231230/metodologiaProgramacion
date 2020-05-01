#include <stdio.h>

int main() {
  int matriz[5][5];
  int matriz2[5][5];
  int i=0;
  int j=0;

  printf("dame los valores de la matriz\n" );
  while (i<5) {

    i++;
    while (j<5) {
      scanf("%d",&matriz[i][j] );
      j++;

    }
  if (i<5) {
    j=0;
    }
}
  i=0;
  j=0;

while (i<5) {
  i++;
  while (j<5) {
    printf("|%d|",matriz[i][j] );
    j++;
  }

   if (i<5) {
    j=0;
    }
printf("\n" );

}
  i=0;
  j=0;
  while (j<5) {

    j++;
  while (i<5) {

    matriz2[j][i]=matriz[j][i];
    i++;

  }
if (j<5) {
  i=0;
  }
}

printf("\n" );
i=0;
j=0;

while (j<5) {


  j++;
  while (i<5) {
    printf("|%d|",matriz2[i][j] );
    i++;

  }
if (j<5) {
  i=0;
  }
  printf("\n" );
}
  return 0;
}
