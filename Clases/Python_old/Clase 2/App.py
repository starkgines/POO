from Clases.Persona import Persona

#Forma en la que se declara un OBJETO a partir de una CLASE
a=Persona("Carlos","Silva")
# Como utilizar un  metodo
a.saludar()

a.setNombre("Juan")

a.saludar()

# 1. El nombre del atributo , 2. El valor que deseo dar al atributo
a.__setattr__("Nombre","Rodrigo")

a.saludar()
# 1. El nombre del atributo que quiero que retorne 
print(a.__getattribute__("Nombre"))

# Retorna los atributos de mi objeto con sus respectivos valores
print(a.__dict__)
# Los nombres de todos los atributos del obejeto
atributos = a.__dict__.keys()

print(atributos)


for x in atributos:
    print(x)
    aux = input("ingrese un valor para el {}: ".format(x))
    a.__setattr__(x,aux)


a.saludar()



print("Exito")