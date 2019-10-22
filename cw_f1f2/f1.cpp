#define _CRT_SECURE_NO_WARNINGS  // for using scanf in VS

#include <stdio.h>

void main()
{
	int argumentValue, resultValue = 1;

	//input
	scanf("%d", &argumentValue);

	//compute
	for (; argumentValue; --argumentValue){
		resultValue *= argumentValue;
	}

	//output
	printf("%d", resultValue);

	return;
}