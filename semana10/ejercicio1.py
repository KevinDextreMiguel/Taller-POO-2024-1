def pedir_n():
  n=-1
  while n<1 or n>=120:
    n=int(input('N: '))
  return n

def factorial(i):
  factorial=1
  for j in range(1,i+1):
    factorial *=j
  return factorial

def sumartoria(n):
  e=0
  dos = 2
  for i in range(n+1):
    numerador = i**2
    denominador = dos * factorial(i)
    e += numerador / denominador
  e = round(e,5)
  print(f'e: {e}')

#main
n=pedir_n()
sumartoria(n)
