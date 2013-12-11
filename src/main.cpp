
#include <time.h>
#include <stdlib.h>
#include "changebit.h"

#include "sqlite/sqlite3.h"



int main(int argc, char const *argv[])
{
	char c = 0xff;
    
	srand (time(NULL));
    
	for (int i = 0; i < 20; ++i)
	{
		int iBitNum = rand() % 10 - 1;
		ChangeBit(&c, iBitNum);
	}


	{
		sqlite3* db;
    	sqlite3** dbpointer = &db;
    	const char* dbname = "test.db";
    	sqlite3_open(dbname, dbpointer);
	}

	return 0;
}
