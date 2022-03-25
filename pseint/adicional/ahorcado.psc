Algoritmo Ahorcado
	Escribir 'Escriba letra por letra una palabra de 8 letras para el ahorcado'
	Dimension palabra[8]
	Dimension correcto[8]
	Para p<-0 Hasta 7 Con Paso 1 Hacer
		correcto[p]=Falso	
	FinPara
	Para p<-0 Hasta 7 Con Paso 1 Hacer
		Escribir 'Inserte la letra'
		Leer palabra[p]		
	FinPara
	Escribir 'Ahora inserte las letras que comparará con la palabra ya establecida. Tienes 10 vidas.'
	vidas=10
	gano=Falso
	Mientras vidas>0&&gano=Falso
		gano=Verdadero
		Escribir 'Adivine la letra'
		Leer l
		letra_correcta=Falso
		Para p<-0 Hasta 7 Con Paso 1 Hacer
			Si l=palabra[p]
				correcto[p]=Verdadero
				Escribir ' Tuviste la letra ',(p+1),' correcta'
				letra_correcta=Verdadero
			FinSi
		FinPara
		Si letra_correcta=Falso
			vidas=vidas-1
			Segun vidas hacer
				9:
					Escribir 'Perdiste, dibujamos el arbol.'
				8:
					Escribir 'Perdiste, dibujamos la cuerda.'
				7:
					Escribir 'Perdiste, dibujamos la cabeza.'
				6:
					Escribir 'Perdiste, dibujamos el torso.'
				5:
					Escribir 'Perdiste, dibujamos la pierna izquierda.'
				4:
					Escribir 'Perdiste, dibujamos la pierna derecha.'
				3:
					Escribir 'Perdiste, dibujamos el brazo izquierdo.'
				2:
					Escribir 'Perdiste, dibujamos el brazo derecho'
				1:
					Escribir 'Perdiste, dibujamos la cara'
				0:
					Escribir 'Perdiste tu última vida. Fin del juego'
			FinSegun
		FinSi
		Para p<-0 Hasta 7 Con Paso 1 Hacer
			Si correcto[p]=Falso
				gano=falso
			FinSi
		FinPara
		Si gano
			Escribir 'Ganaste, gracias por jugar.'
		FinSi
	FinMientras
FinAlgoritmo
