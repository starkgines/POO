
# Para declarar la clase se debe utilizar class segudido del nombre de la clase, por buenas practicas se pone el nombre de la clase con mayusculas
class Persona():
    '''
    Clase Persona

    Atributos: 
        Nombre []
        Apellido

    '''
    # Constructor de la clase que recibe los parametros 
    def __init__(self,Nombre="Juanito",Apellido="Perez"):
        self.Nombre = Nombre
        self.Apellido = Apellido

    def saludar(self):
        print("soy una persona mi nombre es {}".format(self.Nombre))

# Metodos set,get 
    #Metodos set Estos metodos se encargan de cambiar el valor de dicho atributo dentro de la clase
    def setNombre(self,Nombre):
        self.Nombre=Nombre
    def setApellido(self,Apellido):
        self.Apellido=Apellido

        


