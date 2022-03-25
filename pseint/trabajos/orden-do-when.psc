Proceso ordenar_numeros_do_when
	Escribir "numero de veces que se hace el proceso (mayor a 0)";
	Leer t;
	n<-0;
	Si t<=2 Entonces
		Repetir
			Escribir "3 numeros a ordenar";
			Leer a, b, c;
			
			Si a=b Y b=c Entonces
				Escribir a,'  es igual ',b,' es igual  ',c;
				n<-n+1;
			Sino
				Si a=b Entonces
					Si c>a Entonces
						Escribir a,' y ',b,' son iguales y menores, ',c,' es el mayor';
						n<-n+1;
					Sino
						Escribir a,' y ',b,' son iguales y mayores , ',c,' es el menor';
						n<-n+1;
					FinSi
				Sino
					Si b=c Entonces
						Si a>b Entonces
							Escribir c,' y ',b,' son iguales y menores ',a,' es el mayor';
							n<-n+1;
						Sino
							Escribir c,' y ',b,' son iguales y mayores ',a,' es el menor';
							n<-n+1;
						FinSi
					Sino
						Si a=c Entonces
							Si b>a Entonces
								Escribir a,' y ',c,' son iguales y menores',b,' es el mayor';
								n<-n+1;
							Sino
								Escribir a,' y ',c,' son iguales y mayores ',b,' es el menor';
								n<-n+1;
							FinSi
						Sino
							Si a<b Y b<c Entonces
								Escribir a,' es el menor ',b,' es el medio y ',c,' es el mayor';
								n<-n+1;
							Sino
								Si a<c Y c<b Entonces
									Escribir a,' es el menor ',c,' es el medio y ',b,' es el mayor';
									n<-n+1;
								Sino
									Si c<a Y a<b Entonces
										Escribir c,' es el menor ',a,' es el medio y ',b,' es el mayor';
										n<-n+1;
									Sino
										Si a>b Y b>c Entonces
											Escribir c,' es el menor ',b,' es el medio y ',a,' es el mayor';
											n<-n+1;
										Sino
											Si b<a Y a<c Entonces
												Escribir b,' es el menor ',a,' es el medio y ',c,' es el mayor';
												n<-n+1;
											Sino
												Escribir b,' es el menor ',c,' es el medio y ',a,' es el mayor';
												n<-n+1;
											FinSi
										FinSi
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		Hasta Que n=t
		
	Sino
		Repetir
			Escribir "3 numeros a ordenar";
			Leer a, b, c;
			
			Si a=b Y b=c Entonces
				Escribir a,'  es igual ',b,' es igual  ',c;
				n<-n+1;
			Sino
				Si a=b Entonces
					Si c>a Entonces
						Escribir a,' y ',b,' son iguales y menores, ',c,' es el mayor';
						n<-n+1;
					Sino
						Escribir a,' y ',b,' son iguales y mayores , ',c,' es el menor';
						n<-n+1;
					FinSi
				Sino
					Si b=c Entonces
						Si a>b Entonces
							Escribir c,' y ',b,' son iguales y menores ',a,' es el mayor';
							n<-n+1;
						Sino
							Escribir c,' y ',b,' son iguales y mayores ',a,' es el menor';
							n<-n+1;
						FinSi
					Sino
						Si a=c Entonces
							Si b>a Entonces
								Escribir a,' y ',c,' son iguales y menores',b,' es el mayor';
								n<-n+1;
							Sino
								Escribir a,' y ',c,' son iguales y mayores ',b,' es el menor';
								n<-n+1;
							FinSi
						Sino
							Si a<b Y b<c Entonces
								Escribir a,' es el menor ',b,' es el medio y ',c,' es el mayor';
								n<-n+1;
							Sino
								Si a<c Y c<b Entonces
									Escribir a,' es el menor ',c,' es el medio y ',b,' es el mayor';
									n<-n+1;
								Sino
									Si c<a Y a<b Entonces
										Escribir c,' es el menor ',a,' es el medio y ',b,' es el mayor';
										n<-n+1;
									Sino
										Si a>b Y b>c Entonces
											Escribir c,' es el menor ',b,' es el medio y ',a,' es el mayor';
											n<-n+1;
										Sino
											Si b<a Y a<c Entonces
												Escribir b,' es el menor ',a,' es el medio y ',c,' es el mayor';
												n<-n+1;
											Sino
												Escribir b,' es el menor ',c,' es el medio y ',a,' es el mayor';
												n<-n+1;
											FinSi
										FinSi
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		Hasta Que n=t-1
		
	FinSi
	
FinProceso

