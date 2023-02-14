
from .Punto import Punto


class Rectangulo():
    def __init__(self,Punto1,Punto2):
        self.punto1 = Punto1
        self.punto2 = Punto2



    def Puntos(self):

        print("Los puntos del la diagonal del rectangulo son: ",self.punto1,self.punto2)


    def Area(self):

        #Para hallar el area hacemos el area de un triangulo rectangulo multiplicado por dos 
        # Punto 1 (x1,y1) Punto 2(x2,y2) Punto 3(x1,y2)
        P3= Punto(self.punto1.x,self.punto2.y)

        b = P3.Distancia(self.punto1)
        print(b)
        h = P3.Distancia(self.punto2)
        print(h)
        area = (b*h)/2

        return 2*area


    def Perimetro(self):
        P3= Punto(self.punto1.x,self.punto2.y)
        b = P3.Distancia(self.punto1)
        h = P3.Distancia(self.punto2)
        perimetro = b+h 

        return perimetro*2 