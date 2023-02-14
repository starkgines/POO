from Clases.Punto import  Punto
from Clases.Rectangulo import Rectangulo


P1 = Punto(0,0)
P2 = Punto(2,3)

P3 = Punto(-3,1)

P4 = Punto(-1.5,-2.5)

print("Punto 1")
P1.Mostrar()
print("El cuadrante es : ",P1.Cuadrante())
print("Punto 2")
P2.Mostrar()
print("El cuadrante es : ",P2.Cuadrante())
print("Punto 3")
P3.Mostrar()
print("El cuadrante es : ",P3.Cuadrante())
print("Punto 4")
P4.Mostrar()
print("El cuadrante es : ",P4.Cuadrante())

print("distancia del punto violeta al verde",P1.Distancia(P2))

print("distancia del punto rojo al azul",P3.Distancia(P4))


print("rectangulo")

v1 = Punto(2,3)

v2 = Punto(0,0)

R = Rectangulo(v1,v2)

R.Puntos()

print("el area del rectangulo es: ",R.Area())
print("el perimetro del rectangulo es: ",R.Perimetro())