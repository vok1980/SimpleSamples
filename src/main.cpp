
#include <time.h>
#include <stdlib.h>
#include "changebit.h"




int main(int argc, char const *argv[])
{
	char c = 0xff;
    
	srand (time(NULL));
    
	for (int i = 0; i < 20; ++i)
	{
		int iBitNum = rand() % 10 - 1;
		ChangeBit(&c, iBitNum);
	}

	return 0;
}
