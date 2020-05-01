#include <stdio.h>


int localizarVocales(char palabra[], char vocal, int tm);

int main() {
  int m;
  int a=0,e=0,i=0,o=0,u=0;
  printf("de cuantos caracteres es tu palabra ");
  scanf("%d",&m );
  char palabra[m];
  printf("dictame tu palabra\n");
  for(int i = 0; i< m; i++){
    scanf("%s",&palabra[i]);
  }


  a = localizarVocales(palabra,'a',m);
  e = localizarVocales(palabra,'e',m);
  i = localizarVocales(palabra,'i',m);
  o = localizarVocales(palabra, 'o',m);
  u = localizarVocales(palabra, 'u',m);

  printf("a Veces encontratada : %d \n",a );
  printf("e Veces encontratada : %d \n",e );
  printf("i Veces encontratada : %d \n",i );
  printf("o Veces encontratada : %d \n",o );
  printf("u Veces encontratada : %d \n",u );



  return 0;
}

int localizarVocales(char palabra[], char vocal, int tm){
  int cont = 0;

  for(int i = 0; i< tm;i++){
    if(vocal == palabra[i]){
      cont++;
    }
  }
  return cont;
}
