def pedir_n():
  n=-1
  while n<4 or n>=15:
    n=int(input('N: '))
  return n

def graficar(n):
  for i in range(n):
    for espacio in range(n-i):#6-2 = 4
      print(end='  ') 
  
    if i%2==0:
      print(end='-')
    else:
      print(end='|')
  
    for j in range(i*2-1):#6-2 = 4
      print(end=' *')
      
    if i%2==0:
      if i!=0:
        print(end=' -')
    else:
      print(end=' |')
    print()


n=pedir_n()
graficar(n)
