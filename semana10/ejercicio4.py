import random
def pedir_n():
  n=-1
  while n<1 or n>40:
    n=int(input('N: '))
  return n

def generar(n):
  for i in range(n):
    numero = random.randint(1,9)
    lista.append(numero)

def cantidad(numero):
  cont=0
  for i in lista:
    if numero==i:
      cont+=1
  return cont

def cantidad_repeticiones(n):
  conjunto = set(lista)
  for i in conjunto:
    print(f'{i} se repite {cantidad(i)} veces')

def reemplazar(n):
  primos = [2,3,5,7]
  for i in range(len(lista)):
    if lista[i] in primos:
      lista[i]=lista[i]+1



lista=[]
n=pedir_n()
generar(n)
print(lista)
cantidad_repeticiones(n)
reemplazar(n)
print(lista)
