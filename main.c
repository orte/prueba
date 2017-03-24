#include <stdio.h>
#include <stdlib.h>
#define LINEAS 2
#define COLUMNAS 3

float sumarElementos(float** matriz, int lineas, int columnas);
float calculaMedia(float** matriz, int lineas, int columnas);
void multiplicarConstante(float k, float** matriz, int lineas, int columnas);
void imprimirMatriz(float** matriz, int lineas, int columnas);

float sumarElementos(float** matriz, int lineas, int columnas){
	float resultado = 0;
	for(int i = 0; i<lineas; i++){
		for (int j = 0; j < columnas; j++){
			resultado+=matriz[i][j];
		}
	}
	return resultado;
}
float calculaMedia(float** matriz, int lineas, int columnas){
	float resultado = 0;
	int contador = 0;
	for(int i = 0; i<lineas; i++){
		for (int j = 0; j < columnas; j++){
			resultado+=matriz[i][j];
			contador++;
		}
	}
	resultado = resultado/contador;
	return resultado;
}
void multiplicarConstante(float k, float** matriz, int lineas, int columnas){
	for(int i = 0; i<lineas; i++){
		for (int j = 0; j < columnas; j++){
			matriz[i][j]*=k;
		}
	}
}
void imprimirMatriz(float** matriz, int lineas, int columnas){
	printf("Matriz: \n");
	for(int i = 0; i<lineas; i++){
		for (int j = 0; j < columnas; j++){
			printf("%.2f ", matriz[i][j]); 
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	float** matrizPrueba;
	matrizPrueba = (float**) malloc(LINEAS * sizeof(float));
	for (int i = 0; i < LINEAS; i++){
		matrizPrueba[i] = malloc(COLUMNAS * sizeof(float));
	}

	

	for(int i = 0; i< LINEAS; i++){
		for(int j = 0; j<COLUMNAS; j++){
			matrizPrueba[i][j] = 1;
		}
	}
	imprimirMatriz(matrizPrueba, LINEAS, COLUMNAS);
	multiplicarConstante(3, matrizPrueba, LINEAS, COLUMNAS);
	printf("Elementos sumados: %.2f\n", sumarElementos(matrizPrueba, LINEAS, COLUMNAS));
	printf("Media de los elementos: %.2f\n", calculaMedia(matrizPrueba, LINEAS, COLUMNAS));

	for (int i = 0; i < LINEAS; i++){
		free(matrizPrueba[i]);
	}
	free(matrizPrueba);

	return 0;
}