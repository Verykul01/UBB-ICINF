Proceso sin_titulo
	Definir op Como Entero
	
	//op1
	Definir i , n, suma , f Como Real
	//op 2
	Definir a , b , res,  multi Como Real
	
	Repetir
		
		Escribir "----------------------------------------------------------"
		Escribir "Op 1: Sumatoria   ;    Op2: Funciones con intervalo [a,b]"
		Escribir "Op 3:  Factorial N  ;    Op4: A elevado a B" 
		Escribir "Op 5: Sumatoria impar/par   ;    Op6: Salir del programa"
		Escribir "----------------------------------------------------------"
		Escribir ""
		
		Repetir
			Escribir "Indique su Opcion con el número"
			Leer op	
		Hasta Que op<=6 y op>=1
		
		
		
		Segun op Hacer
			1:
				//Op1
				
				
				Escribir "Indique el número de veces de la sumatoria"
				Leer n
				i<-1
				suma<- 0
				
				Para i= 1 Hasta n Hacer
					suma<- suma + i
				FinPara
				
				Escribir ""
				Escribir "- El resultado de la sumatoria es ", suma
			2:
				
				Escribir "Indique el valor de A"
				Leer a
				Escribir "Indique el valor de B"
				Leer b
				x<- a
				suma<- 0
				Mientras x<=b Hacer
					
					Si x % 2 = 0 Entonces
						res<-((x*x*x)+2)
						Escribir "f(",x,") = ",x,"^3 + 2 = ", res
						
					SiNo
						res<-((3*x) - 4)
						Escribir "f(",x,") = (3*",x,") - 4 = ", res
					FinSi
					
					x<-x+1
				FinMientras
				
				
			3:
				
				Escribir "Indique el valor N"
				Leer n
				
				Si n< 0 Entonces
					Escribir "El factorial de ",n," no se puede calcular"
				SiNo
					i<- 1
					
					Para x= 1 Hasta n Con Paso 1 Hacer
						i= x * i
					
					FinPara
					Escribir "El factorial del número es ", i
				FinSi
				
				
			4:
				Repetir
					Escribir "Escriba el valor A"
					Leer a
					Escribir "Escriba el valor B"
					Leer b
				Hasta Que a> 0 y b> 0 
				
				f<-1
				Para i= 1 Hasta b Con Paso 1 Hacer
					f<-f*a
					
				FinPara
				Escribir ""
				Escribir  a , "^", b, " = ", f
			5:
				Escribir "Indique el valor de x"
				Leer n
				
				suma<- 0
				
				Para x= 1 Hasta  n Hacer
					Si x % 2 = 0 Entonces
						suma<- suma + ((2*x*x+ 3)/(x-1))
					SiNo
						suma<- suma + (((x*x*x*x)-3)/(x+2))
					FinSi
				FinPara
				
				Escribir "La sumatoria desde x=1 hasta ", n , " es: ", suma
			
		FinSegun
	Hasta Que op=6
	
	Escribir "Fin del programa "
FinProceso
