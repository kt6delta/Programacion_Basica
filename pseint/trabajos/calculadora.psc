Proceso calculadora
	
	
	Escribir "cantidad de veces que desea hacer operacion";
	Leer rep;
	t<-0;
	
	Escribir "esta calculadora opera en este orden (+,-,/,*,x^n,x^1/2)";
	Repetir
		
		t<-t+1;
		Escribir "numeros a sumar";
		Leer a,b;
		sum<-a+b;
		Escribir 'resultado ', sum;
		
		Escribir "numeros a restar";
		Leer a,b;
		rest<-a-b;
		Escribir 'resultado ', rest;
		
		Escribir "numeros a dividir (el segundo no puede ser 0)";
		Leer a,b;
		Mientras b=0 Hacer
			Escribir "el segundo no puede ser 0";
			Leer a,b;
		FinMientras
		divi<-a/b;
		Escribir "el resultado es ", divi;
		
		Escribir "numeros a multiplicar";
		Leer a,b;
		mult<-a*b;
		Escribir "el resultado es ", mult;
		
		Escribir "base del exponente";
		Leer a;
		Escribir "exponente";
		Leer b;
		expo <-a^b;
		Escribir "el resultado es ", expo;
		
		Escribir "numero para sacar raiz cuadrada";
		Leer a;
		Mientras a<0 Hacer
			Leer a;
			Escribir "solo positivos";
		FinMientras
		expo <-a^0.5;
		Escribir "el resultado es ", expo;
		
	Hasta Que rep=t
	
	
FinProceso
