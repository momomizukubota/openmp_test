#include "stdafx.h"

int main()
{

	#pragma omp parallel for
	for (int i = 0; i < 100; i++)
	{
		printf("%d\n", i);
	}
	
	
	system("pause");

	return 0;
}