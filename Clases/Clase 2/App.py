from Clases.Persona import Persona

#Forma en la que se declara un OBJETO a partir de una CLASE
a=Persona("Carlos","Silva")
# Como utilizar un  metodo
a.saludar()

a.setNombre("Juan")

a.saludar()


a.__setattr__("Nombre","Rodrigo")

a.saludar()

print(a.__getattribute__("Nombre"))


print(a.__dict__)

atributos = a.__dict__.keys()

print(atributos)


for x in atributos:
    print(x)

    aux = input("ingrese un valor para el {}: ".format(x))
    a.__setattr__(x,aux)


a.saludar()

print("Exito")