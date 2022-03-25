import math


m = float  (input ( "m=" )) 
b = float  (input ( "b=" ))

if m != 0 :
    base = -b / m
    base_ = b / m
    base__ = b / -m
    area = base * b / 2
    

    
    if  area < 0 :
        area_ = ( area * -1 )
        lado = ( base * base ) + (b * b)
        l = math.sqrt ( lado )
        perimetro = base + b + l ## base
        print ( "el area es", ( round ( area_ , 2 ) ) , "y perimetro", (round ( perimetro, 2) ) )
    
    else:
        area_ = ( area * 1 ) 
        lado = ( base * base ) + (b * b)
        l = math.sqrt ( lado )
        perimetro = base__ + b + l
        print ( "el area es", ( round ( area_ , 2 ) ) , "y perimetro", (round ( perimetro, 2) ) )

else:
    print ("Triangulo imposible")

 
