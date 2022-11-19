#include<stdio.h>
#include <math.h>

#include <stdlib.h>
#include <signal.h>


#define EPOCH 50

int X0 = 1, X1 = 0, X2 = 0, X3 = 0, X4 = 0, X40 = 1, X41 = 0, X42 = 0, X43 = 0, X44 = 0, X45 = 0, X46 = 0, X5 = 0, X50 = 1, X51 = 0, X52 = 0, X53 = 0, X54 = 0, X55 = 0, X56 = 0, X57 = 0, X6 = 0;
void grafcet0();
void datapath0();
void action0();
void input_weight_bias();
void epoch_trial();
void epoch_decrease();
void A01();
void grafcet4();
void datapath4();
void A02();
void grafcet5();
void datapath5();
void action();
void action1();
void initialize_count1_net1();
void count1_trial();
void count1_decrease();
void stimulate1();
void activation_function1();
void backward();
void action2();
void initialize_count2_net2_losssum();
void count2_trial();
void count2_decrease();
void stimulate2();
void activation_function2();
void add_loss_value();
void print_loss();
void handler() ;

float weight[2], bias, net1, net2, eta = 3, loss_sum;
int dataset[][2] = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
int label[] = {0, 0, 0, 1};
int nb_in = sizeof(dataset[0]) / sizeof(int);
int y,  total = EPOCH, epoch = EPOCH, count1, count2;
