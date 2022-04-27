unset label
clear
set terminal pdf
set output "Precios_del_Combustible.pdf"
set title "Precios del Combustible"
set xlabel "Semana"
set ylabel "Precio por Galón"
set grid
set style data linespoint
plot "datos" using 1:2
f(x) = a*x + b
fit f(x) "datos" via a,b
replot f(x)