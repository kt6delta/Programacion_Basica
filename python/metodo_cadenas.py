curse = "Universidad"
string = "XD y tambien un poco DX"
result = "yo estoy en la\n {} y me siento un poco\n {}".format (curse, string)#1
print(result)# \n espacios

saludo = "HOLA IDiotas" #otro nuevo
persona = "Yo"
accion = "dicen {b} pero no fui {a}".format (b=saludo, a=persona)#2
print(accion)# notese la b y la a


accion = "dicen {b} pero no fui {a}".format (b=saludo, a=persona)#2.1
accion = accion.lower() #minusculas
print(accion)

accion = "dicen {b} pero no fui {a}".format (b=saludo, a=persona)#2.2
accion = accion.upper() #mayuscula
print(accion)

accion = "dicen {b} pero no fui {a}".format (b=saludo, a=persona)#2.3
accion = accion.title() #titulo
print(accion)
  
""" Formato """
accion = "dicen {b} pero no fui {a}".format (b=saludo, a=persona)#2.4
accion = accion.title() #posicion letra 
print(accion)

""" Busqueda """
pos = accion.find("Idiota")
print(pos)

print (accion[11:17] )#comprobando

count = result.count("y")#cuanto se repite
print(count)

new_serch = result.replace("y", "X")#cambiar letras
new_serch = result.split(" ")#separar
print(new_serch)