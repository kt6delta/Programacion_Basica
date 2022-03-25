
Proceso m_enu
	Escribir "para calculadora coloque 1, para comparar numeros 2, para salir 3";
	Leer menu;
	
	Mientras NO (menu=1 o menu=2 o menu=3) Hacer
		Escribir "no valido colocar 1,2 o 3";
		Leer menu;
	FinMientras
	
	
	
	Mientras menu!=3  Hacer
		Escribir "cantidad de veces que se repite el proceso";
		Leer num_rep;
		conta<-0;
		Mientras conta!=num_rep Hacer
			Segun menu Hacer
				1:
					
					Escribir "subproceso calculadora";
					conta<- conta+1;
					
				2:
					Escribir "subproceso orden";
					conta<- conta+1;
					
					
			FinSegun
		FinMientras
		
		Escribir "para calculadora coloque 1, para comparar numeros 2, para salir 3";
		Leer menu;
	FinMientras
	
	
FinProceso
