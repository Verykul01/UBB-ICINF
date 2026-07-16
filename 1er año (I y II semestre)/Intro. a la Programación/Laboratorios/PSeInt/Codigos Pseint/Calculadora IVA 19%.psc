Proceso sin_titulo
	Definir Producto, Iva, res Como Entero
	Escribir "Escriba el valor de su producto: "
	Leer Producto;
	iva <- Producto*(19/100)
	res <- Producto + iva
	Escribir "El valor de su producto con iva es: ", res
FinProceso
