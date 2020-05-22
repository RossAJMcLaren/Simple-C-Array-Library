#include "generate.h"
#include <stdlib.h>
#include <time.h>

void generate(int size, int *data)
{
	//Random Seed
	srand(time(NULL));
	//Random Number Generation
	for(int i = 0; i < size; ++i)
		data[i] = rand();
}