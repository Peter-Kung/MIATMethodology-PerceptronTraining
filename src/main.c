#include "validation.h"

void main()
{

		signal(SIGINT,handler);

		printf("X0 = %d,X1 = %d,X2 = %d,X3 = %d,X4 = %d,X5 = %d,X6 = %d\n",X0 ,X1 ,X2 ,X3 ,X4 ,X5 ,X6 );
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
		//printf("action0 activate !!\n");
}
void input_weight_bias()
{
		//printf("input_weight_bias activate !!\n");
		puts("enter w1, w2, bias: ");
		scanf("%f %f %f", &weight[0], &weight[1], &bias);
}
void epoch_trial()
{
		//printf("epoch_trial activate !!\n");
}
void epoch_decrease()
{
		//printf("epoch_decrease activate !!\n");
		epoch--;
}
void A01()
{
		//printf("A01 activate !!\n");
		datapath4();
		grafcet4();
		//printf("X40 = %d,X41 = %d,X42 = %d,X43 = %d,X44 = %d,X45 = %d,X46 = %d\n",X40 ,X41 ,X42 ,X43 ,X44 ,X45 ,X46 );
}
void A02()
{
		//printf("A02 activate !!\n");
		datapath5();
		grafcet5();
		//printf("X50 = %d,X51 = %d,X52 = %d,X53 = %d,X54 = %d,X55 = %d,X56 = %d,X57 = %d\n",X50 ,X51 ,X52 ,X53 ,X54 ,X55 ,X56 ,X57 );
}
void action()
{
		//printf("action activate !!\n");
}
void action1()
{
		//printf("action1 activate !!\n");
}
void initialize_count1_net1()
{
		//printf("initialize_count1_net1 activate !!\n");
		count1 = sizeof(dataset) / sizeof(int [2]);
		net1 = 0;
}
void count1_trial()
{
		//printf("count1_trial activate !!\n");
}
void count1_decrease()
{
		//printf("count1_decrease activate !!\n");
		count1--;
}
void stimulate1()
{
		//printf("stimulate1 activate !!\n");
		//net1=0;
		for(int i=0;i<nb_in && count1 >= 0;i++)net1+=dataset[count1][i]*weight[i];

		if (count1 >= 0)
			net1+=bias;
}
void activation_function1()
{
		//printf("activation_function1 activate !!\n");
		y = 1.0/(1.0+exp(-net1));

}
void backward()
{
		//printf("backward activate !!\n");
		for(int i=0;i<nb_in && count1 >= 0;i++) { 
				weight[i] = weight[i] + eta*(float)(label[count1] - y) * dataset[count1][i];
				//printf("count: %d, %f * %f * %d\n", count1, y, (float)(label[count1] - y), dataset[count1][i]);
		}

		if (count1 >= 0)
			bias = bias + eta*(label[count1]-y);
}
void action2()
{
		//printf("action2 activate !!\n");
}
void initialize_count2_net2_losssum()
{
		//printf("initialize_count2_net2_losssum activate !!\n");
		net2 = 0;
		count2 = sizeof(dataset) / sizeof(int [2]);
		loss_sum =  0;
}
void count2_trial()
{
		//printf("count2_trial activate !!\n");
}
void count2_decrease()
{
		//printf("count2_decrease activate !!\n");
		count2--;
}
void stimulate2()
{
		//printf("stimulate2 activate !!\n");
		//net2=0;
		for(int i=0;i<nb_in && count2 >= 0;i++)
			net2+=dataset[count2][i]*weight[i];
		

		if (count2 >= 0)
			net2+=bias;
}
void activation_function2()
{
		//printf("activation_function2 activate !!\n");
		y = 1.0/(1.0+exp(-net2));
		//printf("net: %f\n", (float)y);
}
void add_loss_value()
{
		//printf("add_loss_value activate !!\n");
		if (count2 >= 0) {
			loss_sum += sqrt((float)(y-label[count2])*(y-label[count2]));
			//printf("y: %f", (float)(y));
		}
}
void print_loss()
{
		//printf("print_loss activate !!\n");
		//printf("epoch %d: %f\n", 50 - epoch, loss_sum);
		printf("epoch: %d. w1: %f, w2: %f, bias: %f loss: %f\n", total - epoch, weight[0], weight[1], bias, loss_sum);
}
