Proceso sin_titulo
	Definir i , n, edad  Como Entero
	Definir prom, suma , e_menor, e_mayor, e60 , e80 , e90 Como Real
	
	i<-1;
	suma<-0;
	e_menor<-130;
	e_mayor<-1;
	e60 <- 0
	e80 <- 0
	e90 <- 0
	Escribir "Escriba la cantidad de adultos mayores: "
	Leer n
	Mientras i<=n
		Repetir
			Escribir "Escriba la edad del adulto mayor ",i
			Leer edad
			i<- i + 1
		Hasta Que i>=n
		;
		Si e_menor > edad Entonces
			e_menor <- edad
		FinSi
		;
		Si e_mayor < edad Entonces
			e_mayor <- edad
		FinSi
		;
		Si edad<= 69 y edad >= 60
			e60<- e60 + 1
		FinSi
		;
		Si edad<= 89 y edad>= 80
			e80<- e80 + 1
		FinSi
		;
		Si edad >= 90 Entonces
			e90<- e90 + 1
		FinSi
		suma<-suma + edad
	FinMientras
	
	prom<- suma/n
	
	Escribir " Promedio de edades ", prom
	Escribir "Edad de la persona mayor ", e_mayor
	Escribir "Edad de la persona menor ", e_menor
	Escribir " Cantidad de personas con edad entre [60, 69] ", e60
	Escribir "Cantidad de personas con edad entre [80, 89] ", e80
	Escribir "Cantidad de personas con edad mayor o igual a 90 años ", e90
FinProceso
