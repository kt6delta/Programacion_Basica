from sys import stdin

a = str(stdin.readline().strip())
b = str(stdin.readline().strip())
c = str(stdin.readline().strip())
d = str(stdin.readline().strip())
e = str(stdin.readline().strip())

if a == "0" or e == "0":
    print("Recorrido No Valido")

elif a == b == c == d == e == "1":
    print("Recorrido Valido")
 
elif a == "1" and b == "0" and c == "1" and d == "1" and e == "1":
    print("Recorrido Valido")

elif a == "1" and b == "1" and c == "0" and d == "1" and e == "1":
    print("Recorrido Valido")

elif d == "0":
    print("Recorrido No Valido")

elif b == c == "0":
    print("Recorrido No Valido")
    
elif a == "1" and b == "0" and c == "1" and d == "0" and e == "1":
    print("Recorrido Valido")

elif a == "0" and b == "0" and d == "0" and e == "0":
    print("Recorrido No Valido")




    

elif a != "0" or a != "1" or b != "0" or b != "1" or c != "0" or c != "1" or d != "0" or d != "1" or e != "0" or e != "1":
    print("Valor Leido No Valido")




             
             
