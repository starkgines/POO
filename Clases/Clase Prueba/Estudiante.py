from Persona import Persona

class Estudiante(Persona):

    def __init__(self,nombre,codigo,edad,carrera):
        super().__init__(nombre,edad,codigo)
        self.edad=edad
    
    def saludar(self):
        print("Hola soy un estudiante")

