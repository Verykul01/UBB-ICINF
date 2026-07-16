#include <stdio.h>
//Emilio Montenegro 22491832-1


int validar();
void llenar_matriz(int tam,int mat[][tam]);
void mostrar_matriz(int tam,int mat[][tam]);
void copiar_arreglo(int tam,int mat[][tam],int v[]);
void mostrar_arreglo(int tam,int v[]);

int main()
{
	int n;
	n=validar();
	int mat[n][n],v[n];
	llenar_matriz(n,mat);
	printf("\nMatriz\n");
	mostrar_matriz(n,mat);
	printf("\nArreglo primera columna\n");
	copiar_arreglo(n,mat,v);
	mostrar_arreglo(n,v);
	
	return 0;
}

int validar()
{
	int x;
	printf("\nIngrese valor: \n");
	scanf("%d",&x);
	if(x>0 && x<100)
	{
		return x;
	}else{
		printf("ERROR,ingrese valor menor a 100");
		return validar();
	}
}

void llenar_matriz(int tam,int mat[][tam])
{
	int i,j;
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf("Ingrese valor en [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
}

void mostrar_matriz(int tam,int mat[][tam])
{
	int i,j;
	for(i=0;i<tam;i++)
	{
		for(j=0;j<tam;j++)
		{
			printf("[%d]",mat[i][j]);
		}
		printf("\n");
	}	
}

void copiar_arreglo(int tam,int mat[][tam],int v[])
{
	int i,j;
	for(i=0;i<tam;i++)
	{
		for(j=0;j<1;j++)
		{
			v[i]=mat[i][j];
		}
		
	}
}

void mostrar_arreglo(int tam,int v[])
{
	int i;
	for(i=0;i<tam;i++)
	{
		printf("[%d]",v[i]);
	}
}





