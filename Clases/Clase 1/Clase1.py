
## FUNCIONES 

def mi_primera_funcion(a=5,b=8):
    sum=a+b
    print(sum)
    return sum

print("HOLA MUNDO")

## Variables  
num = 0
x = True
print(x)

## Sentencias

if num==50:
    num=60
    num2=50
    sum=num+num2
    print("num es igual a 50",sum)
else:
    print("No es igual a 50")
  
# Bucles
x = ["Hola", "Mundo","QUE","TAL"]
print("ESTO ES EL FOR")
for i in x:
    print(i)
print("ESTO ES EL FOR CON RANGE")
for i in range(9):
    for j in range(9):
        print(j)
        print(i)
contador =0
while contador<20:
    contador=contador+1
    print("Esto es while")

x = mi_primera_funcion(10,13)



print("Este es el valor de x: ",x)



