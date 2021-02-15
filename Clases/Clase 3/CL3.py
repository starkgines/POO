# Librerias a importar
import math


# Definicion de las clases

class punto():
    '''
    Descripción: Representación de un punto en el plano, los atributos son x e y que representan los valores
    de las coordenadas cartesianas 

    Parametros: 
     x : coordenada cartesiana en x
     y : coordenada cartesiana en y

    '''
    def __init__(self,x=0,y=0):
        self.x=x
        self.y=y

    def distancia(self,otro):
        '''
        Descripción: Devuelve la distancia entre dos puntos

        Parametros: 
            otro: Objeto punto
        '''
        dx = self.x - otro.x
        dy = self.y - otro.y
        return math.sqrt((dx*dx+dy*dy))


class calculadora():

    def __init__(self,nombre):
        self.nombre=nombre


    def modelo(self):
        return self.nombre

    @staticmethod
    def sumar(x,y):
        return x+y





# Herencia 

class punto3D(punto):
    '''
    Descripcion: Punto en el espacio que herada de punto 

    parametros: 
        x: posicion x en el espacio
        y: posicion y en el espacio
        z: posicion z en el espacio

    '''
    def __init__(self,x=0,y=0,z=0):
        super().__init__(x,y)
        self.z=z

    @property

    def z(self):
        return self._z

    @z.setter

    def z(self,z):
        self._z=z

    def distancia(self,otro):
        dx=self.x-otro.x
        dy=self.y-otro.y
        dz=self.z-otro.z
        return (dx*dx + dy*dy + dz*dz)**0.5


# Herencia multiple 

class Telefono:
    "Clase teléfono"
    def __init__(self,numero):
        self.numero=numero
    def telefonear(self):
        print('llamando')
    def colgar(self):
        print('colgando') 
    def __str__(self):
        return self.numero	

class Camara:
    "Clase camara fotográfica"
    def __init__(self,mpx):
        self.mpx=mpx
    def fotografiar(self):
        print('fotografiando')        
    def __str__(self):
        return self.mpx
class Reproductor:
    "Clase Reproductor Mp3"
    def __init__(self,capcidad):
        self.capacidad=capcidad
    def reproducirmp3(self):
        print('reproduciendo mp3')                  
    def reproducirvideo(self):
        print('reproduciendo video')                  
    def __str__(self):
        return self.capacidad	

class Movil(Telefono, Camara, Reproductor):
    def __init__(self,numero,mpx,capacidad):
        Telefono.__init__(self,numero)
        Camara.__init__(self,mpx)
        Reproductor.__init__(self,capacidad)
    def __str__(self):
        return "Número: {0}, Cámara: {1},Capacidad: {2}".format(Telefono.__str__(self),Camara.__str__(self),Reproductor.__str__(self))




if __name__ == "__main__":
    
    # Prueba clase punto. 
    punto1= punto()
    punto2= punto(x=4,y=5)

    print(punto1.distancia(otro=punto2))

    #Prueba clase calculadora

    a = calculadora("optimus")
    print("EL MODELO ES: ", a.modelo())
    print("La suma de 2 y 3 es: ",a.sumar(2,3))





