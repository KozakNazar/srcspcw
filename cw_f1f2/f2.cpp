#define _CRT_SECURE_NO_WARNINGS  // for using scanf in VS

#include <stdio.h>

void main()
{
	int value;

	//input
	scanf("%d", &value);

	//compute
	for (++value; ; ++value){
		int divider = value - 1;
		for (; divider > 1; --divider){
			int remainder = value;
			for (; remainder >= divider; remainder -= divider);
			if (!remainder){
				break;			
			}
		}
		if (divider == 1){
			break;
		}
	}

	//output
	printf("%d", value);

	return;
}