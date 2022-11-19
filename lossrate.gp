set terminal postscript color noenhanced      ## setting the term
set output "loss_figure.ps"                ## 輸出檔檔名與副檔名
set key center 
set title "Loss Value in Each Epoch"
set xlabel "Epoch"
set ylabel "Loss value"
set terminal png font " Times_New_Roman,12 "
set output "learningloss.png"

plot "learningLosstest.dat"  using 1:2 with linespoints linewidth 2 title "epoch 50"
