#include <stdio.h>

int binario (int n);
int octal (int n);

int main() {

  int a;
  int n;

  printf("1  binario \n" );
  printf("2  octal \n" );
  scanf("%d",&a );
switch (a) {
  case 1:

    printf("dame un numero \n" );
    scanf("%d",&n );
    printf("binario =  " );
    binario(n);
    printf("\n" );
break;

case 2:

  printf("dame el numero \n" );
  scanf("%d",&n );

  printf("octal = " );
  octal(n);
printf("\n" );

 break;

}




  return 0;
}

int binario (int n){
  if (n>1) {
    binario (n/2);
  }
  printf("%d",n % 2 );
}
int octal (int n){
  if (n>=8) {
    octal(n/8);

  }
printf("%d",n % 8 );
}
