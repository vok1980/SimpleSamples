
#include "changebit.h"

#include <iostream>

void PrintBits(const char val)
{
//	std::cout << "\t" << (int)val << ":\t";

	for (int i = 0; i < 8; ++i)
	{
		std::cout << ((val >> ( 7 - i )) & 0x01);
	}

	std::cout << std::endl;
}


bool ChangeBit(char *pByte, int iBitNumber)
{
    std::cout << "Change " << iBitNumber << "th bit" << std::endl;
    PrintBits(*pByte);
    
	if ( (sizeof(char) * 8 - 1 < iBitNumber) || iBitNumber < 0 )
    {
        std::cerr << "bit number " << iBitNumber << " is out of range" << std::endl << std::endl;;
		return false;
    }

	*pByte ^= ( 1 << iBitNumber );
    PrintBits(*pByte);
    std::cout << std::endl;
	return true;
}
