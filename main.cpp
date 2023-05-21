#include <iostream>
#include "funcs.h"

int main()
{
	std::vector<int> v{5, 66, 3, 14, 2, 6};
	heapsort(v);
	std::cout << "heapsort: " << toString(v);

	std::vector<int> v2{50, 100, 150, 200}; //already sorted array
	heapsort(v2);
	std::cout << "heapsort: " << toString(v2);

	return 0;
}