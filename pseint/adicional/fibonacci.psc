Proceso sin_titulo
Escribir "posicion"
leer p	
Mientras p<1 Hacer
	Escribir "posicion positiva"
	leer p
Fin Mientras

si p=1 entonces
	escribir "0"
	Escribir "numero por el cual desea dividir"
	leer n
	escribir "0"
FinSi

si  p=2 o p=3 Entonces
	Escribir "1"
	Escribir "numero por el cual desea dividir"
	leer n
	d=1/n
	Escribir d
FinSi

si p>3 Entonces
	
	a=0
	b=1
	
	Para l<-1 Hasta p-2 Con Paso 1 Hacer
		c=a+b
		a=b
		b=c		
	Fin Para	
	escribir c
	
	Escribir "numero por el cual desea dividir"
	leer n
	d=c/n
	Escribir d
FinSi



	
FinProceso
