cantidad = int(input('Ingrese la cantidad de alambre requerido: '))

cantidad500 = cantidad//500
residuo500 = cantidad%500

cantidad300 = residuo500//300
residuo300 = residuo500%300

cantidad75 = residuo300//75
residuo75 = residuo300%75

print(f'Se requiere:')
print(f'{cantidad500} rollos de 500 metros')
print(f'{cantidad300} rollo de 300 metros')
print(f'{cantidad75} rollo de 75 metros')
print(f'El último rollo tendrá {residuo75} metro')
