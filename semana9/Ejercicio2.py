codigo_generado = int(input('Ingrese código generado: '))
#TTTTHHMMSS
TTTT = codigo_generado // 1000000
#TTTTHHMMSS-->HH
HH = codigo_generado % 1000000 //10000
#TTTTHHMMSS-->MM
MM = codigo_generado % 10000 //100
#SS
SS = codigo_generado % 100

print('Código del trabajador: ',TTTT)
print('Hora de entrada: ',HH)
print('Minuto de entrada: ',MM)
print('Segundos de entrada: ',SS)
