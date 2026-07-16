Proceso Calculador_Dolar_Euros
	Definir v1, Dólar, Euro, rEuro, rDólar Como real
	Escribir "Escriba su valor para transformarlo"
	Leer v1;
	Si v1>=0 Entonces
		Euros  <- 0.00095
		Dólares <- 0.0011
		rEuro <- v1*Euros
		rDólar <-v1*Dólares
		Escribir "El valor en Dólares es: ", rDólar
		;
		;
		Escribir "El valor en Euros es: ", rEuro
	SiNo
		Escribir "Valor no valido"
	Fin Si
FinProceso