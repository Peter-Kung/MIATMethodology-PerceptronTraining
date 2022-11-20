set terminal postscript color noenhanced      ## setting the term
set output "loss_figure2.ps"                ## 輸出檔檔名與副檔名
set title "Different Weight and Bias Initialize Value in each Epoch"
set xlabel "Epoch"
set ylabel "Loss value"
set terminal png font " Times_New_Roman,12 "
set output "learningloss2.png"

plot \
"learningLosstest.dat"  using 1:2 with linespoints linewidth 2 title "e:50-w1:0-w2:0.4-b:0.3", \
"learningLoss-0-0-0.3.dat"  using 1:2 with linespoints linewidth 2 title "e:50-w1:0-w2:0-b:0.3", \
"learningLoss-0-0.4-0.dat"  using 1:2 with linespoints linewidth 2 title "e:50-w1:0-w2:0.4-b:0", \
"learningLoss-0.4-0.4-0.3.dat"  using 1:2 with linespoints linewidth 2 title "e:50-w1:0.4-w2:0.4-b:0.3", \