#include <stdio.h>

int main() {
  int sueldo;
  int annios;
  float total,aum;

  printf("dame el sueldo del trabajador \n" );
  scanf("%d",&sueldo );
  printf("dame el tiempo que lleva trabajando en años \n" );
  scanf("%d",&annios);
  if (annios<3) {
    aum= sueldo*.03;
    total=sueldo+aum;
    printf("el aumento es %.2f y el total es %.2f\n",aum,total);
}else{}
    if (annios>=3 && annios<5) {
      aum= sueldo * .05;
      total =sueldo+ aum;
      printf("el aumento es %.2f y el total es %.2f\n",aum,total );
}else{}
      if (annios>=5 && annios <10) {
        aum=sueldo *.07;
        total= sueldo + aum;
        printf("el aumento es %.2f  y el total es %.2f \n",aum,total );
}else{}
        if (annios >=10) {
          aum= sueldo *.10;
          total= aum+sueldo;
          printf("el aumento es %.2f y el total es %.2f\n",aum,total );
  }else{}







  return 0;
}
