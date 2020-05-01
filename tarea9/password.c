#include <stdio.h>
int main() {

  char palabra[10];
  char encrip[10];
  int a;
  int n=0;

  do {
    printf("1 : cambiar contraseña\n" );
    printf("2 : encriptar contraseña \n" );
    printf("3 : vizualizar contraseña \n" );
    printf("4 : vizualizar contraseña encriptada\n" );
    printf("5 : salir\n" );
    scanf("%d",&a);
    switch (a) {
      case 1:

      printf("cuantos caracteres tiene tu password max 10\n" );
      scanf("%d",&n );
      printf("deletrame tu password\n" );
      for (int i = 0; i < n; i++) {
        scanf("%s",&palabra[i] );
      //    printf("%d\n", palabra[i]);
              }

              printf("%s\n", palabra );

        break;

    case 2:
      for (int i = 0; i < n; i++) {

        encrip[i]=palabra[i]+3;
        }
        printf("%s\n",encrip);


        break;

    case 3:
    if (palabra!=0){
      printf("la contraseña es: %s\n",palabra );



    }


    break;
  case 4:

printf("la contraseña encriptada es %s \n",encrip );


break;

}
}while (a!=5); {
}




  return 0;
}
