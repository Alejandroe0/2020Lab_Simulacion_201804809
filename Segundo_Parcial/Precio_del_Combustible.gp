unset label
clear
set terminal pdf
set output "Precios_del_Combustible.pdf"
set title "Precios del Combustible"
set xlabel "Semana"
set ylabel "Precio por Galón"
set grid
set style data points 
plot "datos" using 1:2
f(x) = a*x + b
fit f(x) "datos" via a,b
set title "Precios del Combustible con el ajuste lineal"
replot f(x)
g(x) = 30
set xrange [0:24]
set yrange [20:35]
set title "Precios del Combustible poyeccion de valor=30"
replot g(x)