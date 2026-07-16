#include <stdio.h>
//Emilio Montenegro 22491832-1

int factorial();
int potencia();
int validar();

int main()
{
	int n;
	float f;
	
	n = validar();
	
	f=(factorial(n+1)+factorial(n-1))/(potencia(n,4)+potencia(n,factorial(n+1)));
	printf("El resultado de f(%d) es: %.2f",n,f);
	
	return 0;
}

int validar()
{
	int x;
	printf("\nIngrese valor: \n");
	scanf("%d",&x);
	if(x<1)
	{
		printf("ERROR,ingrese valor mayor o igual a 1");
		return validar();
		
	}else{
		return x;
	}
}
	
int factorial(int n)
{
	int i;
	int res=1;
	for(i=1;i<n+1;i++)
	{
	res=res*i;
	}
	
	return res;
}

int potencia(int base,int exp)
{
	int i,x;
	x=base;
	for(i=1;i<exp;i++)
	{
		base=base*x;
	}
	return base;
}


