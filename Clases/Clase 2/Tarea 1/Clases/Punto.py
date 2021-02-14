


class Punto():
    def __init__(self,x,y):
       self.x = x
       self.y = y 

    def Mostrar(self):
        print("X: {} \n Y: {} \n".format(self.x,self.y))


    def Cuadrante(self):
        if(self.x>= 0):
            if(self.y>=0):
                return 1
            else:
                return 4
        if(self.x<0):
            if(self.y>=0):
                return 2
            else:
                return 3


    def Distancia(self,Punto):

        x2 = (self.x - Punto.x)**2
        y2 = (self.y - Punto.y)**2 

        dis = (x2 + y2)**(1/2) 

        return dis


