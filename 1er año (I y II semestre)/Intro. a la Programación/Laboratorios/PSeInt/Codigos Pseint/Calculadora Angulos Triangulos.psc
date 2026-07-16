Proceso sin_titulo
	// Cree un algoritmo que dado dos ángulos de un triangulo ingresados
	//por teclado muestre por pantalla el tercer ángulo faltante
	Definir v1, v2 , v3, resv3 Como Entero
	Escribir "Escriba el primer angulo de su triangulo: "
	Leer v1
	Escribir "Escriba el segundo angulo de su triangulo: "
	Leer v2
	resv3 <- ((v1+v2) - 180)
	v3 <- resv3 * (-1)
	Escribir "El angulo restante es: ", v3,"°"
FinProceso
