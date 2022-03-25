Proceso figonachi
	
	escribir 'posicion de la serie de figonachi'
	leer p
	
	Mientras p<0 Hacer
		Escribir "mayores a 0"
		leer p
	Fin Mientras
	
	

		
	Dimension Num_fi[p]
	para n<-3 Hasta p Con Paso 1 Hacer
		Num_fi[1]=0
		Num_fi[2]=1
			
		Num_fi[n]<-Num_fi[n-2]+Num_fi[n-1]
		
	FinPara
	
	escribir Num_fi[p]
	
	escribir 'numero por el cual dividir'
	leer m
	
	d= Num_fi[p]/m
	
	escribir d

	
	
	

	
	
FinProceso

