def pedir_n():
  n=-1
  while n<1:
    n=int(input('N: '))
  return n

def pedir_b():
  b=-1
  while b<1 or b>5:
    b=float(input('B: '))
  return b

def sumartoria(n,b):
  sumatoria1=sumatoria2=0
  aumentar2 = 2
  denominador = 4
  for i in range(n):
    numerador = aumentar2 * b
    #forma corta
    sumatoria1 += numerador / denominador * (-1)**i
    #forma 2 -->Opcional
    if i%2==0:
      sumatoria2 += numerador / denominador
    else:
      sumatoria2 -= numerador / denominador
    #necesario
    aumentar2 += 2
    denominador += 3
  print(f'serie: {sumatoria1}')
  print(f'serie2: {sumatoria2}')#forma 2 -->Opcional


#main
n=pedir_n()
b=pedir_b()
sumartoria(n,b)
