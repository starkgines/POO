from Persona import Persona
from Estudiante import Estudiante


class Ingeniero(Persona):

    def __init__(self,nombre,edad,codigo,trabajo):
        super().__init__(nombre,edad,codigo)
        self.trabjo=trabajo


    def saludar(self):
        print("HOLA SOY UN INGENIERO")
