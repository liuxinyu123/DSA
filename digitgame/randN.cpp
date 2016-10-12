#include "time.h"
#include "randN.h"
#include <cstdlib>

int rand(int n)
{
	srand(static_cast<unsigned int> (time(NULL)));

	return rand() % n;

	
}
