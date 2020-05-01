#include <stdio.h>

int main() {
  char c=0;
  char d = 0;
  printf("dame un caracter\n" );
  scanf("%c",&c );
  if(c=='2'){
    printf("Dame otro caracter: \n" );
    scanf("%s",&d);
    if(d=='0'){
      printf("el caracter introducido es:  %c\n",c);
    }else{
      return printf("ese no es un caracter clave\n" );
    }
  }else{
    if (c=='c' || c=='z') {
      printf("el caracter introducido es:  %c\n",c);
    } else{
      printf("ese no es un caracter clave\n" );
    }

  }





  return 0;
}
