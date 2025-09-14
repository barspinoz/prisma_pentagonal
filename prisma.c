#include <stdio.h>
#include <math.h>

int main(){
	/*variables de entrada*/
	float perimetro=0;
	float apotema=0;
	float altura=0;
	
	/*variables de salida*/
	float ab=0;
	float al=0;
	float at=0;
	float vol=0;
	
	/*leer variables*/
	printf("\n Ingrese el perimetro de la base: \t");
	scanf(" %f",&perimetro);
	printf("\n Ingrese el apotema: \t");
	scanf(" %f",&apotema);
	printf("\n Ingrese la altura: \t");
	scanf(" %f",&altura);
	
	/*area de la base*/
	ab=(perimetro*apotema)/2;
	printf("\n El area de la base es %.2f",ab);
	
	/*area lateral*/
	al=perimetro*altura;
	printf("\n El area lateral es %.2f",al);
	
	/*area total*/
	at=al+2*ab;
	printf("\n El area total es %.2f",at);
	
	/*volumen*/
	vol=ab*altura;
	printf("\n El volumen es %.2f \n",vol);
}//main