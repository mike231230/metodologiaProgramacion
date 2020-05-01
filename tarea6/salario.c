#include <stdio.h>


int main (){

	int salario = 0;	
	float aumento = 0;

	printf("Dame el salario del empleado\n" );
	scanf("%d",&salario);
	printf("Calculando el aumento\n");
	if(salario > 500000){
		aumento = salario * .12;
		printf("El aumento que le toca es:%.2f\n",aumento);
	}else{
		aumento = salario * .15;
		printf("El aumento que le toca es : %.2f\n",aumento );
	}

	

	






	return 0;

}