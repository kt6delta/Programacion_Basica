Proceso ordenar_numeros_for

	Escribir "cantidad de veces que se hace el proceso";
		Leer t;
		Si t>=3 Entonces
			Para i<-0 Hasta t Con Paso 1 Hacer
				Escribir "numeros a ordenar";
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
			FinPara
		Sino
			Para i<-0 Hasta t-1 Con Paso 1 Hacer
				Escribir "numeros a ordenar";
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
			FinPara
		FinSi
		
FinProceso

