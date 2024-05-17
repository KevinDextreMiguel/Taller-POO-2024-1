salario = float(input('Salario: '))
cantidad_personas = int(input('Número de personas a cargo: '))

linea = ''
if cantidad_personas==1:
  if salario<=500:
    linea = 'P'
  else:
    linea = 'O'
elif cantidad_personas<=4:
  if salario<=750:
    linea = 'P'
  else:
    linea = 'O'
else:
  if salario<=1000:
    linea = 'P'
  else:
    linea = 'O'

print('Tipo de línea al que puede acceder: ',linea)
