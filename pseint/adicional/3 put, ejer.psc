Proceso sin_titulo
	
	Leer a
	Leer b
	
	Mientras No (a=0 y b=0) Hacer
		
		Mientras No (a>=1 y a<=23 ) o No (b>=1 y b<=23) Hacer
			Escribir "un rango de numeros entre 1 y 23 "
			Leer a
			Leer b
		Fin Mientras
		
		n=1
		i=1
		Si b>a Entonces
			Mientras (b>=6*n-1) Hacer 
				c=6*n-1
				n=n+1
			Fin Mientras
			n=n-1
				
			Mientras b>=6*i+1 Hacer
				d=6*i+1
				i=i+1
			Fin Mientras
			i=i-1
			Segun a Hacer
				1:
					cont_=3
					Escribir n+i+cont_
				2:
					cont_=2
					Escribir n+i+cont_
				3:
					cont_=1
					Escribir n+i+cont_
				De Otro Modo:
					cont_=0
					Escribir n+i+cont_
				Fin Segun
			
		Sino
				
			Mientras (a>=6*n-1) Hacer 
				c=6*n-1
				n=n+1
			Fin Mientras
			n=n-1
			Mientras a>=6*i+1 Hacer
				d=6*i+1
				i=i+1
			Fin Mientras
			i=i-1
			Segun b Hacer
				1:
					cont_=3
					Escribir n+i+cont_
				2:
					cont_=2
					Escribir n+i+cont_
				3:
					cont_=1
					Escribir n+i+cont_
				De Otro Modo:
					cont_=0
					Escribir n+i+cont_
			Fin Segun
		Fin Si			
		
		Leer a
		Leer b
		
	Fin Mientras
	
	
	
	
	
FinProceso
