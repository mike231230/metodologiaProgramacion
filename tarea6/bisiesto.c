#include <stdio.h>


int main (){

	int anio;	
	

		printf("Dame un año\n" );
		scanf("%d",&anio);


		if ( anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0) )
        printf( "\n   ES BISIESTO\n" );
    else
        printf( "\n   NO ES BISIESTO\n" );
	







	return 0;

}