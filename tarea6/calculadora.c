#include <stdio.h>


int main (){

	int opt; 
	int numero1 = 0;
	int numero2 = 0;
	int resultado = 0;
	

	printf("\nBienvenido al menu de calculadora \n");
	printf("1.-Sumar\n");
	printf("2.-Restar\n");
	printf("3.-Multiplicar\n");
	printf("\nEscribe el número de opción deseada\n");
	scanf("%d",&opt);

	switch(opt){

		case 1:

			printf("Vamos a sumar\n");
			printf("Dame un número :\n");
			scanf("%d",&numero1);
			printf("Dame otro número :\n");
			scanf("%d",&numero2);
			resultado = numero1+numero2;
			printf("Tu resultado es : %d\n",resultado );
			break;

		case 2 :
			
			printf("Vamos a restar\n");	
			printf("Dame un número :\n");
			scanf("%d",&numero1);
			printf("Dame otro número :\n");
			scanf("%d",&numero2);
			resultado = numero1-numero2;
			printf("Tu resultado es : %d\n",resultado );
			break;	
		case 3 :
			
			printf("Vamos a Multiplicar\n");	
			printf("Dame un número :\n");
			scanf("%d",&numero1);
			printf("Dame otro número :\n");
			scanf("%d",&numero2);
			resultado = numero1*numero2;
			printf("Tu resultado es : %d\n",resultado );
			break;	



	}








	return 0;

}