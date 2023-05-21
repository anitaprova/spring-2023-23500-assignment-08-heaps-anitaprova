#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("heapsort")
{
	std::vector<int> v{5, 66, 3, 14, 2, 6};
	siftUp(v, 0);
	CHECK(toString(v) == "");

	removeMin(v);
	CHECK(toString(v) == "");

	heapsort(v);
	CHECK(toString(v) == "");
}