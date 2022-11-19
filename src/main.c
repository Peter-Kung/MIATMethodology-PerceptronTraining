#include "validation.h"

void main()
{

		signal(SIGINT,handler);

		

		while(1)
		{
				datapath0();
				grafcet0();
		}
}



void handler() 
{
	for (int i = 0;i < sizeof(dataset) / sizeof(int [2]);++i) {
		net1 = weight[0] * dataset[i][0] + weight[1] * dataset[i][1] + bias;
		printf("%f\n", 1.0 / (1.0 + exp(-net1)));
	}

	exit(0);
}


void grafcet0()
{

		if((X0 == 1) && (1))
		{
				X0 = 0;
				X1 = 1;
				return;
		}

		if((X1 == 1) && (1))
		{
				X1 = 0;
				X2 = 1;
				return;
		}

		if(X2 == 1)
		{
				if(epoch != 0)
				{
						X2 = 0;
						X3 = 1;
				}
				else if( epoch == 0)
				{
						X2 = 0;
						X0 = 1;
				}
				return;
		}

		if((X3 == 1) && (1))
		{
				X3 = 0;
				X4 = 1;
				return;
		}

		if((X4 == 1) && (count1 < 0) && X40 == 1)
		{
				X4 = 0;
				X5 = 1;
				return;
		}

		if((X5 == 1) && (count2 < 0) && X50 == 1)
		{
				X5 = 0;
				X2 = 1;
				return;
		}

		if((X6 == 1) && (1))
		{
				X6 = 0;
				X0 = 1;
				return;
		}

}
void grafcet4()
{

		if((X40 == 1) && (1))
		{
				X40 = 0;
				X41 = 1;
				return;
		}

		if((X41 == 1) && (1))
		{
				X41 = 0;
				X42 = 1;
				return;
		}

		if(X42 == 1)
		{
				if(count1 >= 0)
				{
						X42 = 0;
						X43 = 1;
				}
				else if( count1 < 0)
				{
						X42 = 0;
						X40 = 1;
				}
				return;
		}

		if((X43 == 1) && (1))
		{
				X43 = 0;
				X44 = 1;
				return;
		}

		if((X44 == 1) && (1))
		{
				X44 = 0;
				X45 = 1;
				return;
		}

		if((X45 == 1) && (1))
		{
				X45 = 0;
				X46 = 1;
				return;
		}

		if((X46 == 1) && (1))
		{
				X46 = 0;
				X42 = 1;
				return;
		}

}
void grafcet5()
{

		if((X50 == 1) && (1))
		{
				X50 = 0;
				X51 = 1;
				return;
		}

		if((X51 == 1) && (1))
		{
				X51 = 0;
				X52 = 1;
				return;
		}

		if(X52 == 1)
		{
				if(count2 >= 0)
				{
						X52 = 0;
						X53 = 1;
				}
				else if( count2 < 0)
				{
						X52 = 0;
						X57 = 1;
				}
				return;
		}

		if((X53 == 1) && (1))
		{
				X53 = 0;
				X54 = 1;
				return;
		}

		if((X54 == 1) && (1))
		{
				X54 = 0;
				X55 = 1;
				return;
		}

		if((X55 == 1) && (1))
		{
				X55 = 0;
				X56 = 1;
				return;
		}

		if((X56 == 1) && (1))
		{
				X56 = 0;
				X52 = 1;
				return;
		}

		if((X57 == 1) && (1))
		{
				X57 = 0;
				X50 = 1;
				return;
		}

}
void datapath0()
{
		if(X0 == 1)
				action0();
		if(X1 == 1)
				input_weight_bias();
		if(X2 == 1)
				epoch_trial();
		if(X3 == 1)
				epoch_decrease();
		if(X4 == 1)
				A01();
		if(X5 == 1)
				A02();
		if(X6 == 1)
				action();
}
void datapath4()
{
		if(X40 == 1)
				action1();
		if(X41 == 1)
				initialize_count1_net1();
		if(X42 == 1)
				count1_trial();
		if(X43 == 1)
				count1_decrease();
		if(X44 == 1)
				stimulate1();
		if(X45 == 1)
				activation_function1();
		if(X46 == 1)
				backward();
}
void datapath5()
{
		if(X50 == 1)
				action2();
		if(X51 == 1)
				initialize_count2_net2_losssum();
		if(X52 == 1)
				count2_trial();
		if(X53 == 1)
				count2_decrease();
		if(X54 == 1)
				stimulate2();
		if(X55 == 1)
				activation_function2();
		if(X56 == 1)
				add_loss_value();
		if(X57 == 1)
				print_loss();
}
void action0()
{
}
void input_weight_bias()
{
		puts("enter w1, w2, bias: ");
		scanf("%f %f %f", &weight[0], &weight[1], &bias);
		//puts("|w1       | w2     | bias   | X1     | X2     | alpha     | y     | label     |eta*(label-y)| dw1  |dw2     | dtheta  |  ");
}
void epoch_trial()
{
}
void epoch_decrease()
{
		epoch--;
}
void A01()
{
		datapath4();
		grafcet4();
}
void A02()
{
		datapath5();
		grafcet5();
}
void action()
{
}
void action1()
{
}
void initialize_count1_net1()
{
		count1 = sizeof(dataset) / sizeof(int [2]);
		net1 = 0;
}
void count1_trial()
{
}
void count1_decrease()
{
		count1--;
}
void stimulate1()
{

		for(int i=0;i<nb_in && count1 >= 0;i++)
			net1+=dataset[count1][i]*weight[i];

		if (count1 >= 0)
			net1+=bias;
}
void activation_function1()
{
		y = 1.0/(1.0+exp(-net1));

}
void backward()
{
	//printf("count1: %d\n", count1);
	
	/*
	if (count1 >= 0){
		printf("|%5.5f | %5.5f | %5.5f | %5d | %5d | %5.5f | %5.5f | %5d |  %5.5f | %5d | %5d | %5.5f |\n", 
				weight[0], weight[1], bias, 
				dataset[count1][0], dataset[count1][1], 0.0,
				y, label[count1], eta * (label[count1] - y), 
				dataset[count1][0], dataset[count1][1], 1.0
				);
	}
	*/
		for(int i=0;i<nb_in && count1 >= 0;i++) { 
				weight[i] = weight[i] + eta*(float)(label[count1] - y) * dataset[count1][i];
		
		}

		if (count1 >= 0)
			bias = bias + eta*(label[count1]-y);
}
void action2()
{
}
void initialize_count2_net2_losssum()
{
		net2 = 0;
		count2 = sizeof(dataset) / sizeof(int [2]);
		loss_sum =  0;
}
void count2_trial()
{
}
void count2_decrease()
{
		count2--;
}
void stimulate2()
{
		for(int i=0;i<nb_in && count2 >= 0;i++)
			net2+=dataset[count2][i]*weight[i];
		

		if (count2 >= 0)
			net2+=bias;
}
void activation_function2()
{
		y = 1.0/(1.0+exp(-net2));
}
void add_loss_value()
{
		if (count2 >= 0) {
			loss_sum += sqrt((float)(y-label[count2])*(y-label[count2]));
		}
}
void print_loss()
{
		printf("%d %f\n", 50 - epoch, loss_sum);  /*eta * (label - y) */
}
