import random
class Persona():
  def __init__(self, nombre, edad, sexo, peso,altura):
    self.__nombre = nombre
    self.__edad = edad
    self.__DNI = random.randint(10000000,99999999)
    self.__sexo = sexo
    self.__peso = peso
    self.__altura = altura
  
  #set
  def set_nombre(self,nombre):
    self.__nombre = nombre
  def set_edad(self,edad):
    self.__edad = edad
  #get
  def get_nombre(self):
    return self.__nombre
  def get_edad(self):
    return self.__edad
  
  def imprimir_datos(self):
    print("Nombre: ",self.__nombre)
    print("Edad: ",self.__edad)
    print("DNI: ",self.__DNI)
    print("Sexo: ",self.__sexo)
    print("Peso: ",self.__peso)
    print("Altura: ",self.__altura)

  def calcula_imc(self):
    resultado = "sobrepeso"
    imc = self.__peso / self.__altura**2
    if imc < 20:
      resultado = "debajo de un peso ideal"
    elif imc >= 20 and imc<=25:
      resultado = "peso ideal"
    print(resultado)
  
  def esMayorDeEdad(self):
    if self.__edad <18:
      return 'Menor de edad'
    return 'Es mayor de edad'




objetoPersona = Persona("Luis", 17, 'M', 100,1.69)
objetoPersona2 = Persona("Juan", 23, 'M', 89,1.89)
objetoPersona3 = Persona("Maria", 20, 'F', 60,1.65)

lista = [objetoPersona,objetoPersona2,objetoPersona3]

for persona in lista:
  print()
  persona.imprimir_datos()
  persona.calcula_imc()
  print(persona.esMayorDeEdad())
