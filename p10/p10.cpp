﻿#include <stdio.h>
#include <stdlib.h>
void cubeByReference(int *nPtr);
int main(void)

{

	int number = 5;
	printf("The original value of number is %d", number);
	cubeByReference(&number);
	printf("\nThe new value of number 1s %d\n", number);

}

void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;

}
	