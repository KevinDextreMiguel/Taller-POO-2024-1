import pandas as pd
import matplotlib.pyplot as plt

df_titanic = pd.read_csv('titanic.csv',sep=';')
#print(df_titanic)

#definir la figura y los ejes
fig,ax = plt.subplots()
#Gráfico de tipo pie con los fallecidos y supervivientes
df_titanic.Survived.value_counts().plot(kind='pie',
    labels=['Muertos','Sobrevivientes'],
    title='Gráfico de tipo pie con los fallecidos y supervivientes',
    autopct='%1.1f%%')

# Gráfico de barras con el número de personas en cada clase
df_titanic.Pclass.value_counts().plot(kind='bar',
     title='Gráfico de barras con el número de personas en cada clase')
