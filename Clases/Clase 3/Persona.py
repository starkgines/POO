from abc import ABCMeta,abstractclassmethod

class Persona(metaclass=ABCMeta): 

    def __init__(self,nombre,edad,codigo):
        self.nombre = nombre
        self.edad = edad
        self.codigo = codigo
    @abstractclassmethod
    
    def saludar(self):
        pass