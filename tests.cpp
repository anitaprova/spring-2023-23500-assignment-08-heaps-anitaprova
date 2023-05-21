#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("heapsort")
{
	std::vector<int> v{5, 66, 3, 14, 2, 6};
	heapsort(v);
	CHECK(toString(v) == "2 3 5 14 6 66 \n");

	std::vector<int> v2{0, 23, 4, 9, 56, 102, 99, 1};
	heapsort(v2);
	CHECK(toString(v2) == "0 1 56 4 9 102 99 23 \n");

	std::vector<int> v3{0, 1, 4, 9, 56, 102}; //aready sorted array
	heapsort(v3);
	CHECK(toString(v3) == "0 1 56 4 9 102 \n");
}