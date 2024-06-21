import pandas as pd
import matplotlib.pyplot as plt

def grafica(s_ventas,titulo):
  #definir la figura y los ejes
  fig,ax = plt.subplots()
  #dibujar sectores
  s_ventas.plot(kind='pie',ax=ax,autopct='%1.1f%%')

  plt.title(titulo)
  plt.savefig(titulo+'.png')

ventas = {'Enero':300,'Febrero':280,'Marzo':320}
titulo = 'Ventas de Juan'
s_ventas = pd.Series(ventas)
grafica(s_ventas,titulo)
