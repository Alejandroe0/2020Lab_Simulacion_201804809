unset label
clear                                           # Hago un clear para quitar cuakquier configuracion anterior en GNUPLOT
set terminal pdf                                # Pido que lo muestre como pdf.
set output "Grafica_de_la_Ecuacion.pdf"         # Le doy el nombre que tendra el archivo pdf.
set title "Grafica de f(x)=2+co(e^(x)-2)-e^(x)" # Pongo el titulo de la grafica 
set xlabel "x"                                  
set ylabel "f(x)"                               # Seteo los textos de cada eje
set grid                                        # Activos las lineas para ver las intesecciones de los ejes
set xrange [-2:3]                               # Declaro el rango de x
set yrange [-5:2]                               # Decalro el rango de y
set style data line                             # Defino el estilo de la grafica como una linea continua
f(x) = 2+cos(exp(x)-2)-exp(x)                   # Defino la función que voy a graficar
plot f(x)                                       # Ploteo la grafica

