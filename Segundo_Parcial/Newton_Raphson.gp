unset label
clear
set terminal pdf
set output "Grafica_de_la_Ecuacion.pdf"
set title "Grafica de f(x)=2+co(e^(x)-2)-e^(x)"
set xlabel "x"
set ylabel "f(x)"
set grid
set xrange [-2:3]
set yrange [-5:2]
set style data line
f(x) = 2+cos(exp(x)-2)-exp(x)
plot f(x)

