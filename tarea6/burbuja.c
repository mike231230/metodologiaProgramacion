#include <stdio.h>


int main (){

	int numeros[4];	
	int temporal = 0;
	

	for(int i = 0; i<4 ;i++){
		printf("Escribe un numero:\n");
		scanf("%d",&numeros[i]);
	}

	for (int i = 1; i < 4; ++i)
	{
		for(int j = 0; j<4; j++){
			if(numeros[i] > numeros[j]){
				temporal = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = temporal;
			}
		}	
	}
	printf("\n");

	for (int i = 0; i < 4; ++i)
	{
		printf("%d\n",numeros[i] );
	}






	return 0;

}