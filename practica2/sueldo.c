#include <stdio.h>


int main (){

	int salario ;
	float impuesto ;
	float iva;
	float total;

printf("Dame el salario del trabajador \n" );
scanf("%d",&salario );
if (salario>= 15000 && salario<45000) {
 impuesto= salario *.17;
 total= salario-impuesto;
 printf("el salario neto del trabajador es %.2f\n",total );

	if (salario >=45000) {
 		impuesto= salario*.07;
		iva = salario *.17;
		total= salario - iva - impuesto;
	printf("el salario neto del trabajador es %.2f\n",total );
}else{}

}else{
impuesto= salario *.15;
total= salario-impuesto;
printf("el salario neto del trabajador es %.2f\n",total);
}







	return 0;

}
