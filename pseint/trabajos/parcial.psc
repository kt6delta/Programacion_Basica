Proceso correccion
	escribir "puntos del parcial"
	leer m
	Segun m Hacer
		1:
			Escribir "ingrese numeros para sacar impares"
			leer a, b 
			
			
			
			Mientras NO(a=0 y b=0) hacer
				Si a<b Entonces
					
					si (a mod 2=1) y (b mod 2=1)
						Mientras b-a!=2 Hacer
							Escribir "coloque otros numeros"
							Leer a,b
						FinMientras
						Escribir a, " ", b 
						
					FinSi
					
					si ((a mod 2=0) y (b mod 2=1)) o ((a mod 2=1) y (b mod 2=0)) 
						Mientras b-a!=3 Hacer
							Escribir "coloque otros numeros"
							Leer a,b
						FinMientras
						si (a mod 2=0) y (b mod 2=1) 
							a=a+1
							Escribir a ," ", b
						Sino 
							b=b-1
							Escribir a ," ", b
						FinSi
						
					FinSi
					
					si (a mod 2=0) y (b mod 2=0) 
						Mientras b-a!=4 Hacer
							Escribir "coloque otros numeros"
							Leer a,b
						FinMientras
						a=a+1
						b=b-1
						Escribir a, " ", b				
					FinSi
				FinSi
				
				Si a>b Entonces
					Si (a mod 2=1 y b mod 2=1) 
						Mientras a-b!=2 Hacer
							Escribir "coloque otros numeros"
							Leer a,b
						FinMientras
						Escribir b, " ", a 
						
					FinSi
					si (a mod 2=0 y b mod 2=1) o (a mod 2=1 y b mod 2=0) 
						Mientras a-b!=3 Hacer
							Escribir "coloque otros numeros"
							Leer a,b
						FinMientras
						
						Si (a mod 2=1 y b mod 2=0)
							b=b+1
							Escribir b, " ", a
						Sino
							a=a-1
							Escribir b, " ", a
						FinSi
					FinSi
					
					si (a mod 2=0 y b mod 2=0 ) 
						Mientras a-b!=4 Hacer
							Escribir "coloque otros numeros"
							Leer a,b
						FinMientras
						a=a+1
						b=b-1
						Escribir b, " ", a				
					FinSi
				Fin Si
				
				Escribir "numeros para sacar impares"
				leer a, b 
			FinMientras
		2:
			escribir 'escribir un numero y se dira el signo'
			definir n como entero				
			leer n
			Mientras n!=0 Hacer
				si n>0 entonces
					escribir '+'
					leer n
				sino 
					Escribir '-'
					leer n
				FinSi
				
			Fin Mientras
			
		3:
			Escribir "posicion de la serie"
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
				d=1/p
				Escribir "promedio ", d
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
				
				Escribir "promedio"
				
				d=c/p
				Escribir d
			FinSi
			
		4:
			escribir 'indicar el dia, mes y año'
			definir a,b,c como entero
			leer a,b,c
			
			d=c mod 4
			
			Mientras (a>28 y b=2 y d!=0) o (a>29 y b=2 y d=0)
				escribir 'coloque otro dia mas pequeño'
				leer a		
			FinMientras
			Mientras a>31 o a<1 o b<1 o b>12 
				escribir 'coloque otro mes'
				leer b		
			FinMientras			
			
			si a=30 y (b=4 o b=6 o b=9 o b=11) Entonces
				a=1
				b=b+1
				escribir a, '/' , b , '/', c, " es el dia siguiente"
			Fin Si	
			
			Si a=31 y (b=1 o b=3 o b=5 o b=7 o b=8 o b=10)  Entonces
				a=1
				b=b+1
				escribir a, '/' , b , '/', c, " es el dia siguiente"
			Fin Si
			
			si a<30 y (b=4 o b=6 o b=9 o b=11) Entonces
				a=a+1
				escribir a, '/' , b , '/', c, " es el dia siguiente" 
			FinSi
			
			si a<31 y (b=1 o b=3 o b=5 o b=7 o b=8 o b=10 o b=12) Entonces
				a=a+1
				escribir a, '/' , b , '/', c, " es el dia siguiente"
			FinSi
			si a=31 y b=12 Entonces
				a=1
				b=1
				c=c+1
				Escribir a,"/", b, "/", c, " es el dia siguiente"
			FinSi
			
			si d!=0 entonces
				si a<28 y b=2 Entonces
					a=a+1
					escribir a, '/' , b , '/', c, " es el dia siguiente" 
				FinSi
				si a=28 y b=2 Entonces
					a=1
					b=b+1
					escribir a, '/' , b , '/', c, " es el dia siguiente"
				FinSi
			Sino
				si a<29 y b=2 Entonces
					a=a+1
					escribir a, '/' , b , '/', c, " es el dia siguiente" 
				FinSi
				si a=29 y b=2 Entonces
					a=1
					b=b+1
					escribir a, '/' , b , '/', c, " es el dia siguiente"
				FinSi
			Fin si
		5:
			n_puntos=0
			puntos2=0
			m=0
			
			Mientras m!=3 Hacer
				
				escribir 'escoja 1 para piedra, 2 para papel y 3 para tijeras'
				leer n
				
				pc= aleatorio (1,3)
				Segun n Hacer
					1:
						si pc=1 Entonces
							escribir "empate, pc saco piedra"
						FinSi
						Si pc=2 Entonces
							punto= Falso
							Escribir "la pc tiene un punto,pc saco papel"
						Sino
							punto=Verdadero
							escribir "tienes un punto,pc saco tijeras"
						Fin Si
						si punto =Verdadero  Entonces
							n_puntos= n_puntos+1
						FinSi
						Si punto =Falso Entonces
							puntos2= puntos2+1
						FinSi
					2:
						si pc=2 Entonces
							Escribir 'empate, pc saco papel'
						FinSi
						Si pc=1 Entonces
							punto=Verdadero
							Escribir 'tienes un punto, pc saca piedra'
						Sino
							punto=Falso
							Escribir  'la pc tiene un punto,pc saco tijeras'
						Fin Si
						si punto =Verdadero Entonces
							n_puntos= n_puntos+1
						FinSi
						si punto=Falso Entonces
							puntos2=puntos2+1
						FinSi
					3:
						si pc=3 Entonces
							Escribir 'empate,pc saco tijeras'
						FinSi
						Si pc=2 Entonces
							
							punto= Verdadero
							Escribir 'tienes un punto, pc saco papel'
						finSi	
						Si pc=1 Entonces
							punto=Falso
							Escribir  'la pc tiene un punto, pc saca piedra'
						Fin Si
						si punto =Verdadero Entonces
							n_puntos= n_puntos+1
						FinSi
						si punto=Falso Entonces
							puntos2= puntos2+1
						FinSi
					Fin Segun
					m=m+1
				Fin Mientras
				
				si n_puntos=puntos2 Entonces
					Escribir 'tie (empate)'
				FinSi
				Si n_puntos>puntos2 Entonces
					Escribir 'winner  the game'
				Sino
					Escribir 'you lost the game'
				Fin Si
				
			
		Fin Segun
		
FinProceso
