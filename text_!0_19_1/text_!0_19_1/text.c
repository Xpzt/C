#define _CRT_SECURE_NO_WARNINGS 1

#define N_VALUES 5
#include <stdio.h>

int main()
{
	float values[N_VALUES];
	float *vp;
	//指针+-整数；指针的关系运算
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}
	return 0;
}


