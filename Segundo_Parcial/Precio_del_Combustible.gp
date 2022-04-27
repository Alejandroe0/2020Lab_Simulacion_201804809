unset label
clear                                                   # Hago un clear para quitar cuakquier configuracion anterior en GNUPLOT
set terminal pdf                                        # Pido que lo muestre como pdf.
set output "Precios_del_Combustible.pdf"                # Le doy el nombre que tendra el archivo pdf.
set title "Precios del Combustible"                     # Pongo el titulo de la grafica
set xlabel "Semana"
set ylabel "Precio por Galón"                           # Seteo los textos de cada eje
set grid                                                # Activos las lineas para ver las intesecciones de los ejes
set style data points                                   # Defino el estilo de la grafica como puntos
plot "datos" using 1:2                                  # Grafico usando la primera colunma de "datos" como eje x y la saegunda como eje y
f(x) = a*x + b                                          #Defino la función f(x) la ecuación de la recta
fit f(x) "datos" via a,b                                #Hago un fit de los datos ajustando a y b
set title "Precios del Combustible con el ajuste lineal"# Renombro para la nueva grafica
replot f(x)                                             # Vuelvo a plotear agregando f(x) a la grafica anterioi
g(x) = 30                                               # Defino G(x) como la constante 30
set xrange [0:24]                                       # Defino el rango de x [0,24]
set yrange [20:35]                                      # Defino el rango de y [20,30]
set title "Precios del Combustible poyeccion de valor=30"# Renombro para la tercera grafica 
replot g(x)                                             # Vuelvo a graficar aplicando la configuraciones y agregando g(x)
replot "datos2" using 1:2                               # ploteo las nuevas coordenadas