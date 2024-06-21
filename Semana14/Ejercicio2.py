import pandas as pd
import matplotlib.pyplot as plt

def grafica(df_ventas):
  #definir la figura y los ejes
  fig,ax = plt.subplots()
  #dibujar sectores
  df_ventas.plot(kind='bar',ax=ax)
  #añadimos un titulo
  plt.title('Evolución del número de ventas')

df_ventas = pd.Series([1200,840,1340,1290,1100],
                index=[2019,2020,2021,2022,2023])

grafica(df_ventas)
