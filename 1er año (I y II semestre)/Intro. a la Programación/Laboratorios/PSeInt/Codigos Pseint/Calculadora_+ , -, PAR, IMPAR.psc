Proceso sin_titulo
	Definir v1 Como Real
	Escribir "Escriba su número: "
	Leer v1;
	Si v1 >= 0 Entonces
		Escribir "Su número es Positivo y "
		SI v1 % 2 == 0 Entonces
			Escribir "PAR"
		SiNo
			Escribir "IMPAR"
		FinSi
	SiNo
		Escribir "Su número es NEGATIVO y "
		SI v1 % 2 == 0 Entonces
			Escribir "PAR"
		SiNo
			Escribir "IMPAR"
		FinSi
	FinSi
FinProceso
