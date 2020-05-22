#include <stdlib.h>
#include <stdio.h>
#include "generate.h"
#include "sort.h"
#include "search.h"

#define NUM_INTEGERS 65536

int main(int argc, char **argv)
{
	//Allocate array size
	int data[NUM_INTEGERS];
	
	//Fill array with random numbers
	generate(NUM_INTEGERS, data);
	
	//Output 20 values - Currently Unsorted
	
	printf("\nUnsorted\n");
	for (int i = 0; i < 20; ++i)
		printf("%d\n", data[i]);
	
	//Now sort data
	sort(NUM_INTEGERS, data);
	
	//Output 20 values - Currently Sorted
	printf("\nSorted\n");
	for(int i = 0; i < 20; ++i)
		printf("%d\n", data[i]);
	
	return 0;
}