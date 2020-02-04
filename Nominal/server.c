#include "server.h"
#include <unistd.h>
#include <stdio.h>
#include < stdlib.h>



// index 0 for oldest sample
static float sliding_window[N];

float service(void)
{
	float mean=0.0;
	for(i=0;i<N;i++)
	{
		mean+=sliding_window[i];
	}
	mean=/N;
	return mean;
}
void add_sample(float sample)
{
	for(i=0;i<N-1;i++)
	{
		sliding_window[i];=sliding_window[i+1];
	}
	sliding_window[N-1]=sample;	
}

void print_result(float result)
{
	printf("The Mean Value is %.2f",result);
}

void primary_mode()
{
	float sample=0.0,mean=0.0;
	sample=getNewSample();
	StoreSample(file, sample);
	mean=service();
	StoreOutput(file, mean);
	print_result(mean);
	
}

