Algoritmo Trabajo1
	definir A,B,C como real
	definir opcion como real
	definir x como entero 
	x<-1
	Repetir 
	Escribir "Inserte número para cada tipo de operación binaria o unaria: "
	Escribir "1. Suma" 
	Escribir "2. Resta" 
	Escribir "3. Multiplicación"
	Escribir "4. División"
	Escribir "5. Módulo"
	Escribir "6. Potencia" 
	Escribir "7. Raíz cuadrada"
	Escribir "8. Factorial Positivo" 
	escribir "0. Salir del programa"
	leer opcion 
	Segun opcion  Hacer
		1:
			Escribir "Usted ingresó suma como operación, definida como A + B = C "
			Escribir " Ingrese variable A: " 
			leer A
			Escribir " Ingrese variable B: " 
			leer B
			C<-A+B
			Escribir "El resultado de la operación es: " A " + " B " = " C
		2:
			Escribir "Usted ingresó resta como operación, definida como A - B = C"
			Escribir " Ingrese variable A: " 
			leer A
			Escribir " Ingrese variable B: " 
			leer B
			C<-A-B
			Escribir "El resultado de la operación es:  " A "  - " B " = " C
		3:
			Escribir "Usted ingresó multiplicación como operación, definida como A * B = C "
			Escribir " Ingrese variable A: " 
			leer A
			Escribir " Ingrese variable B: " 
			leer B
			C<-A*B
			Escribir "El resultado de la operación es:  " A " * " B " = " C
		4:
			Repetir
			Escribir "Usted ingresó división como operación, definida como A / B = C "
			Escribir " Ingrese variable A: " 
			leer A
			Escribir " Ingrese variable B: " 
			leer B
			si B=0
				escribir "El divisor tiene que ser distinto a  0. "  
			FinSi
		Hasta Que B<>0
			C<-A/B
			Escribir "El resultado de la operación es:  " A " / " B " = " C
		5:
			Escribir "Usted ingresó módulo como operación, definida como  A % B = C "
			Escribir " Ingrese variable A: " 
			leer A
			
			Escribir " Ingrese variable B: " 
			repetir 
				leer B
				si B=0 Entonces
					escribir "La variable B tiene que ser distinta a 0. "
				FinSi
				hasta que B<>0
			C<-A MOD B
			Escribir "El resultado de la operación es:  " A " % " B " = " C
		6:
			Escribir "Usted ingresó potencia como operación, definida como A ^ B = C "
			Escribir " Ingrese variable A: " 
			leer A
			Escribir " Ingrese variable B: " 
			leer B
			C<-A^B
			Escribir "El resultado de la operación es:  " A "  ^ " B " = " C
		7:
			Escribir "Usted ingresó raíz cuadrada como operación, definida como A ^ 1/2 = C "
			Escribir " Ingrese variable A: " 
			repetir 
				leer A
				si A<0
					escribir "A tiene que ser mayor o igual a 0. " 
				FinSi
			hasta que A>=0
			C<-raiz(A)
			Escribir "El resultado de la operación es: " 
			Escribir "Base: " A "  Exponente " 1/2 " = " C
		8:
			Escribir "Usted ingresó factorial como operación, definida como !A = C "
			repetir 
			Escribir " Ingrese variable A: " 
			leer A
			si A<0
				escribir "El número a ingresar tiene que ser mayor o igual a 0. "
			FinSi
			hasta que A>=0
			B<-1
			Para x=1 hasta A hacer 
				B<- B*x
			FinPara
			C<-B
			Escribir "El resultado de la operación es:  !" A   "  =  " C
		0:
			Escribir " Programa finalizado."
		De Otro Modo:
			Escribir "Ingresó un número inválido. " 
	Fin Segun
	hasta que opcion=0 
FinAlgoritmo
//Ricardo Enrique Velásquez Betancourt