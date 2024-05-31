import random
class Contrasenia():
  def __init__(self,longitud):
    self.__longitud = longitud
    self.__contrasenia = ""

  #set
  def set_longitud(self,longitud):
    self.__longitud = longitud
  def set_contrasenia(self,contrasenia):
    self.__contrasenia = contrasenia

  #get
  def get_longitud(self):
    return self.__longitud
  def get_contrasenia(self):
    return self.__contrasenia

  def generarContrasena(self):
    valor = ""
    for i in range(self.__longitud):
      dado = random.randint(0,2)
      if dado == 0:
        valor = str(random.randint(0,9))
      elif dado == 1:
        valor = chr(random.randint(ord('a'),ord('z')))
      else:
        valor = chr(random.randint(ord('A'),ord('Z')))
      self.__contrasenia += valor#'1lC'

  def esSeguro(self):
    contNum= contMinus = contMayus = 0
    for i in self.__contrasenia:
      if i>='a' and i<='z':
        contMinus+=1
      elif i>='A' and i<='Z':
        contMayus+=1
      else:
        contNum+=1
    
    if contNum > 5 and contMayus >2 and contMinus>1:
      return 'Es segura'
    else:
      return 'NO ES SEGURA'



def generar_contrasenias(n):
  for i in range(n):
    longitud = random.randint(9,15)
    obj = Contrasenia(longitud)
    obj.generarContrasena()
    lista.append(obj)

def imprimir(n):
  for i in range(len(lista)):
    print(lista[i].get_contrasenia(),': ',lista[i].esSeguro())

n=10
lista=[]
generar_contrasenias(n)
imprimir(n)

