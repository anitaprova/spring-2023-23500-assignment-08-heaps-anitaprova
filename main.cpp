#include <iostream>
#include "funcs.h"

int main()
{
	std::vector<int> v{5, 66, 3, 14, 2, 6};
	/*siftUp(v, 5);
	std::cout << toString(v);*/

	heapsort(v);
	std::cout << "heapsort: " << toString(v);
	
	return 0;
}