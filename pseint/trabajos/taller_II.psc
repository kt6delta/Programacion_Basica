
Proceso taller_II
	
	
	Escribir "ingrese 1 para iniciar";
	Leer menu;
	
   Mientras menu!=1 Hacer
		Escribir "no valido, colocar 1 para iniciar";
		Leer menu;
	FinMientras	
	
	
	Mientras menu!=4  Hacer
		Escribir "cantidad de veces que se repite el proceso (diferente de 0)";
		Leer num_rep;
		Mientras num_rep=0 Hacer
			Escribir "tiene que ser diferente de 0";
			Leer num_rep;
		FinMientras
		
		conta<-0;
		Mientras conta!=num_rep Hacer
			Segun menu Hacer
				1:
					Escribir "esta calculadora opera en este orden (+,-,/,*,x^n,x^1/2)";
					
					Escribir "numeros a sumar";
					Leer a,b;
					resul<-a+b;
					Escribir 'resultado ', resul;
					
					Escribir "numeros a restar";
					Leer a,b;
					resul<-a-b;
					Escribir 'resultado ', resul;
					
					Escribir "numeros a dividir (el segundo no puede ser 0)";
					Leer a,b;
					Mientras b=0 Hacer
						Escribir "el segundo no puede ser 0";
						Leer a,b;
					FinMientras
					resul<-a/b;
					Escribir "el resultado es ", resul;
					
					Escribir "numeros a multiplicar";
					Leer a,b;
					resul<-a*b;
					Escribir "el resultado es ", resul;
					
					Escribir "base del exponente";
					Leer a;
					Escribir "exponente";
					Leer b;
					resul <-a^b;
					Escribir "el resultado es ", resul;
					
					Escribir "numero para sacar raiz cuadrada";
					Leer a;
					Mientras a<0 Hacer
						Escribir "solo positivos";
						Leer a;
					FinMientras
					resul <-a^0.5;
					Escribir "el resultado es ", resul;
					
					Escribir "escriba los 3 numeros a comparar";
					Leer a, b, c;
					
					Si a=b Y b=c Entonces
						Escribir a,'  es igual ',b,' es igual  ',c;
					Sino
						Si a=b Entonces
							Si c>a Entonces
								Escribir a,' y ',b,' son iguales y menores, ',c,' es el mayor';
							Sino
								Escribir a,' y ',b,' son iguales y mayores , ',c,' es el menor';
							FinSi
						Sino
							Si b=c Entonces
								Si a>b Entonces
									Escribir c,' y ',b,' son iguales y menores ',a,' es el mayor';
								Sino
									Escribir c,' y ',b,' son iguales y mayores ',a,' es el menor';
								FinSi
							Sino
								Si a=c Entonces
									Si b>a Entonces
										Escribir a,' y ',c,' son iguales y menores',b,' es el mayor';
									Sino
										Escribir a,' y ',c,' son iguales y mayores ',b,' es el menor';
									FinSi
								Sino
									Si a<b Y b<c Entonces
										Escribir a,' es el menor ',b,' es el medio y ',c,' es el mayor';
									Sino
										Si a<c Y c<b Entonces
											Escribir a,' es el menor ',c,' es el medio y ',b,' es el mayor';
										Sino
											Si c<a Y a<b Entonces
												Escribir c,' es el menor ',a,' es el medio y ',b,' es el mayor';
											Sino
												Si a>b Y b>c Entonces
													Escribir c,' es el menor ',b,' es el medio y ',a,' es el mayor';
												Sino
													Si b<a Y a<c Entonces
														Escribir b,' es el menor ',a,' es el medio y ',c,' es el mayor';
													Sino
														Escribir b,' es el menor ',c,' es el medio y ',a,' es el mayor';
													FinSi
												FinSi
											FinSi
										FinSi
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
					
					conta<- conta+1;
				2:
					
					Escribir "esta calculadora opera en este orden (+,-,/,*,x^n,x^1/2)";
					
					Escribir "numeros a sumar";
					Leer a,b;
					resul<-a+b;
					Escribir 'resultado ', resul;
					
					Escribir "numeros a restar";
					Leer a,b;
					resul<-a-b;
					Escribir 'resultado ', resul;
					
					Escribir "numeros a dividir (el segundo no puede ser 0)";
					Leer a,b;
					Mientras b=0 Hacer
						Escribir "el segundo no puede ser 0";
						Leer a,b;
					FinMientras
					resul<-a/b;
					Escribir "el resultado es ", resul;
					
					Escribir "numeros a multiplicar";
					Leer a,b;
					resul<-a*b;
					Escribir "el resultado es ", resul;
					
					Escribir "base del exponente";
					Leer a;
					Escribir "exponente";
					Leer b;
					resul <-a^b;
					Escribir "el resultado es ", resul;
					
					Escribir "numero para sacar raiz cuadrada";
					Leer a;
					Mientras a<0 Hacer
						Leer a;
						Escribir "solo positivos";
					FinMientras
					resul <-a^0.5;
					Escribir "el resultado es ", resul;
					
					conta<- conta+1;
					
				3:
					Escribir "escriba los 3 numeros a comparar";
					Leer a, b, c;
					
					Si a=b Y b=c Entonces
						Escribir a,'  es igual ',b,' es igual  ',c;
					Sino
						Si a=b Entonces
							Si c>a Entonces
								Escribir a,' y ',b,' son iguales y menores, ',c,' es el mayor';
							Sino
								Escribir a,' y ',b,' son iguales y mayores , ',c,' es el menor';
							FinSi
						Sino
							Si b=c Entonces
								Si a>b Entonces
									Escribir c,' y ',b,' son iguales y menores ',a,' es el mayor';
								Sino
									Escribir c,' y ',b,' son iguales y mayores ',a,' es el menor';
								FinSi
							Sino
								Si a=c Entonces
									Si b>a Entonces
										Escribir a,' y ',c,' son iguales y menores',b,' es el mayor';
									Sino
										Escribir a,' y ',c,' son iguales y mayores ',b,' es el menor';
									FinSi
								Sino
									Si a<b Y b<c Entonces
										Escribir a,' es el menor ',b,' es el medio y ',c,' es el mayor';
									Sino
										Si a<c Y c<b Entonces
											Escribir a,' es el menor ',c,' es el medio y ',b,' es el mayor';
										Sino
											Si c<a Y a<b Entonces
												Escribir c,' es el menor ',a,' es el medio y ',b,' es el mayor';
											Sino
												Si a>b Y b>c Entonces
													Escribir c,' es el menor ',b,' es el medio y ',a,' es el mayor';
												Sino
													Si b<a Y a<c Entonces
														Escribir b,' es el menor ',a,' es el medio y ',c,' es el mayor';
													Sino
														Escribir b,' es el menor ',c,' es el medio y ',a,' es el mayor';
													FinSi
												FinSi
											FinSi
										FinSi
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
					conta<- conta+1;
					
					
			FinSegun
		FinMientras
		
		Escribir "para calculadora coloque 2, para comparar numeros 3, para salir 4";
		Leer menu;
		
		Mientras NO(menu=4 o menu=2 o menu=3) Hacer
			Escribir "para calculadora coloque 2, para comparar numeros 3, para salir 4";
			Leer menu;
			
		FinMientras
		
	FinMientras
	
	
FinProceso
