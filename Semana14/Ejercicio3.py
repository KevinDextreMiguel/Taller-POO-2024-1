import pandas as pd
import matplotlib.pyplot as plt

def grafica(df_datos):
  #definir la figura y los ejes
  fig,ax = plt.subplots()
  #dibujar las series de lìnea con los ingreso y gastos
  df_datos.plot(ax=ax)
  #añadir la escala del eje y
  ax.set_ylim([0,max(df_datos.Ingresos.max(),df_datos.Gastos.max())])
  #añadir un titulo
  plt.title('Evolución de ingresos y gastos')

datos = {'Mes':['Ene','Feb','Mar','Abr'],
         'Ingresos':[2900,3400,4090,1100],
         'Gastos':[1900,2400,3090,3100]}

df_datos = pd.DataFrame(datos).set_index('Mes')
#print(df_datos)

grafica(df_datos)
