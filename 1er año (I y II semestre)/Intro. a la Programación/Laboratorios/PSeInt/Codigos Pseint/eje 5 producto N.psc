Proceso sin_titulo
	Definir n , i , iva, prod , prod_mayor Como Real	
	Definir suma, suma_iva , bruto , suma_bruto , suma_prod_iva Como Real
	Definir no_iva , prod_iva Como Entero
	Definir iva_prod_mayor, bruto_prod_mayor, neto_prod_mayor Como Entero
	
	Escribir "Ingrese el numero de productos"
	Leer n
	
	//asignacion
	prod_mayor<- 0
	prod_iva<- 0
	//sumadores
	no_iva<- 0
	suma <- 0
	suma_bruto<- 0
	suma_prod_iva<-0
	bruto<- 0
	//mayor
	iva_prod_mayor<- 0
	bruto_prod_mayor<- 0
	neto_prod_mayor<-0
	;
	Para i<-1 Hasta n Con Paso 1
		Repetir
			Escribir "Indique el valor del producto ", i
			Leer prod
			
		Hasta Que prod> 0
		
		Si prod < 180 Entonces
			no_iva<- no_iva+ 1
			
		SiNo
			prod_iva<- prod*(19/100)
			bruto<- prod+ prod_iva
		FinSi
		
		//producto mayor
		
		
		Si prod_mayor < prod Entonces
			prod_mayor<- prod
			iva_prod_mayor<- prod_iva
			bruto_prod_mayor<- bruto
			neto_prod_mayor<- prod
		FinSi
		
		//suma valor neto
		suma<- suma + prod
		//suma valor bruto
		suma_bruto <- suma_bruto + bruto
		//suma prod iva
		suma_prod_iva<- suma_prod_iva + prod_iva
		
		
	FinPara
	Escribir ""
	
	Escribir "Cantidad de productos sin iva: ", no_iva
	Escribir "Suma de valores neto: ",suma
	Escribir "Suma de valores brutos: ",suma_bruto
	Escribir "Suma de ivas de los productos: ",suma_prod_iva
	Escribir ""
	Escribir "-Valores del producto mayor: "
	Escribir "Precio neto: ", neto_prod_mayor
	Escribir "Su porcentaje de iva: ", iva_prod_mayor
	Escribir "Valor bruto: ", bruto_prod_mayor
FinProceso
