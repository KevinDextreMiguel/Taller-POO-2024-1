codigo = int(input('codigo: '))
if codigo > 0 and codigo<6:
 cantidad = int(input('cantidad: '))

precio = 0
monto_final = 0
if codigo == 1:
  precio = 15.75
elif codigo == 2:
  precio = 21
elif codigo == 3:
  precio = 8.5
elif codigo == 4:
  precio = 25
elif codigo == 5:
  precio = 13.25
else:
  print('El còdigo debe estar en el rango de 1-5')

if codigo > 0 and codigo<6:
  monto_final = precio * cantidad
  if monto_final>=100:
    monto_final = monto_final * 0.89
  else:
    print('No aplica para el descuento')
  print('El monto a pagar es s/.',monto_final)
