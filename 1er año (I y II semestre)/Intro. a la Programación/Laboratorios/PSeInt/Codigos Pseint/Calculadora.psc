Proceso sin_titulo
	// Hecho por Emilio Montenegro y Matias Matamala
	
	Definir op Como Entero
	Definir a,b,n,i,suma Como Real
	
	Escribir "------------------------------------------"
	Escribir "Op 1: Suma ; Op2: Resta ; Op3: Multiplicación ; Op4: Division "
	Escribir "Op 5: Modulo ; Op6: Potencia ; Op7: Raiz Cuadrada ; Op8: Factorial del Número "
	Escribir "Op9:Salir del Programa"

	Repetir
		Escribir "Ingrese su opción"
		leer op;
		Escribir ""
		Segun op Hacer
			1:
				Escribir "Ingrese Cuantos valores a sumar"
				Leer n
				suma<-0
				Para i=1 Hasta  n Hacer
					Escribir ""
					Escribir "Ingrese el valor ",i;
					leer a
					suma=suma+a
					Si i<n Entonces
						Escribir ""
						Escribir "Suma actual: ",suma
					FinSi
				FinPara
				Escribir "Suma total ",suma
			2:
				Escribir "Ingrese cuantos valores a restar"
				Leer n
				
				Para i = 1 Hasta n Hacer
					Escribir "Ingrese el valor ", i
					Leer a
					
					Si i = 1 Entonces
						suma = a
					SiNo
						suma = suma - a
					FinSi
					
					Si i < n Entonces
						Escribir "Resta actual: ", suma
					FinSi
				FinPara
				
				Escribir "Resta total: ", suma
				
			3:
				Escribir "Ingrese cuantos valores a multiplicar"
				Leer n
				suma<-1
				Para i=1 Hasta n Hacer
					Escribir ""
					Escribir "Ingrese el valor ",i
					Leer a
					suma=suma*a
					Si i<n Entonces
						Escribir ""
						Escribir "Multiplicación actual ",suma
					FinSi
				FinPara
				Escribir "Multiplicación total: ",suma
			4:
				Escribir "Ingrese la cantidad de divisones que desea hacer"
				Leer n
				Para i=1 Hasta n Hacer
					Escribir "Ingrese el valor de A"
					Leer a
					Escribir "Ingrese el valor de B"
					Leer b
					
					Mientras b=0 Hacer
						Escribir "Error: no se puede divir por 0"
						Escribir "Ingrese nuevamente b"
						Leer b
					FinMientras
					
					resultado<- a/b
					
					Escribir "Resultado: ", resultado
					
					
				FinPara
			5:  
				Escribir "Ingrese la modulos que desea hacer"
				Leer n
				Para i=1 Hasta n Hacer
					Escribir "Ingrese el valor de A"
					Leer a
					Escribir "Ingrese el valor de B"
					Leer b
					
					Mientras b=0 Hacer
						Escribir "Error: no se puede divir por 0"
						Escribir "Ingrese nuevamente b"
						Leer b
					FinMientras
				FinPara
				
				
				resultado<- a MOD b
				
				Escribir "Resultado: ", resultado
				
				
				
			6:
				Escribir "Ingrese la base A";
				Leer a;
				Escribir "Ingrese Exponente B";
				Leer b;
				n<-1
				
				
				Si a>= 1 Entonces 
					Si b> 0 Entonces
						Para i=1 Hasta b Hacer
							n= n * a;
						FinPara
					FinSi
					
					Si b= -1 Entonces
						n= 1/n
					FinSi
					
					Si b<-1 Entonces
						Para i=-1 Hasta b con paso -1 Hacer
							n= n * a
							
						FinPara
						n= 1/n
					FinSi
					
				SiNo //a<0 Negativo
					
					Si b%2 = 0 Entonces
						a=abs(a)
						Si b> 0 Entonces
							Para i=1 Hasta b Hacer
								n= n * a;
							FinPara
						FinSi
						
						Si b= -1 Entonces
							n= 1/n
						FinSi
						
						Si b<-1 Entonces
							Para i=-1 Hasta b con paso -1 Hacer
								n= n * a
								
							FinPara
							n= 1/n
						FinSi
					SiNo
						Si b> 0 Entonces
							Para i=1 Hasta b Hacer
								n= n * a;
							FinPara
						FinSi
						
						Si b= -1 Entonces
							n= 1/n
						FinSi
						
						Si b<-1 Entonces
							Para i=-1 Hasta b con paso -1 Hacer
								n= n * a
								
							FinPara
							n= 1/n
						FinSi
					FinSi
					
				FinSi
				
				
				
				
				Si b= 0 Entonces
					Escribir "El resultado es 1"
				SiNo
					Escribir "El resultado es :",n;
				FinSi
				
				
			7:
				Repetir
					Escribir ""
					Escribir " -Importante: ingrese un valor mayor a 1"
					Escribir ""
					Escribir "Ingrese el valor"
					Leer a
					
				Hasta Que a>=1
				b=raiz(a)
				Escribir "La raiz cuadrada de ",a," es ",b
			8:
				
				Repetir
					Escribir "Ingrese el valor (Debe ser mayor a 0)";
					Leer a
					n<-1
					Para i=1 Hasta a Hacer
						n=n*i
					FinPara
				Hasta Que a>0
				Escribir ""
				Escribir a,"! = ",n;
		FinSegun
		
		Escribir "------------------------------------------"
	Hasta Que op=9
	Escribir "Fin del programa"
FinProceso
