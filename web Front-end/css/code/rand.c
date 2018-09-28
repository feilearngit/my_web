#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *pm, int *pn)
{
	int temp;
	temp = *pm;
	*pm = *pn;
	*pn = temp;
}

int main(void)
{
	unsigned int i;
	int a[513], seed[8] = {0xfd,0x89,0x59,0xef,0x33,0xed,0x3e,0xdf};
//	srand((unsigned)time(NULL));
	for (int i = 0; i < 512; ++i)
	{
		/* code */
		a[i] = i;
		//printf("%x",a[i]);
		//seed[i] = i;
	}

	srand(seed[2]);
	for (int i = 0; i < 8; i++)
	{
		/* code */
		
		printf("%x\n", rand());
	}
	i = 0x5a7a7dd4;
	printf("%x\n", i);


/*2fb356
24edf
393079
8f9d5
40e20b
d9793
3c02a6*/

	//i = （unsigned）time(NULL);
	//printf("(unsigned)time is %x\n", i);
}












