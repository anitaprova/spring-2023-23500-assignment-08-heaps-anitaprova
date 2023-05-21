#include "funcs.h"

int getMin(std::vector<int> data)
{
	int small = data[0];
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i] < small)
		{
			small = data[i];
		}
	}
	return small;
}

int getMinIndex(std::vector<int> data)
{
	int small = data[0];
	int index = 0;
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i] < small)
		{
			small = data[i];
			index = i;
		}
	}
	return index;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

// i was having a lot of trouble understanding and implementing heaps
// so i looked at  some resources online on how to do the heap sort
// im still a bit confused on it but i understand it a lot better now
void buildHeap(std::vector<int> &data, int index)
{
	int smallest = index;				// this is acting like the root
	int left = (2 * index) + 1; // children
	int right = (2 * index) + 2;

	if (right < data.size() && data[right] < data[smallest])
	{
		smallest = right; // checking for smallest on both children
	}

	if (left < data.size() && data[left] < data[smallest])
	{
		smallest = left;
	}

	if (smallest != index) // if the smallest isnt already the root
	{
		swap(data[index], data[smallest]);
		buildHeap(data, smallest);
	}
}

void heapsort(std::vector<int> &data)
{
	if (data.empty())
	{
		return;
	}

	//gets the subtrees in order 
	for (int i = (data.size() / 2) - 1; i >= 0; i--)
	{
		buildHeap(data, i);
	}

	//sorts the subtrees themselves 
	for (int i = data.size() - 1; i >= 0; i--)
	{
		swap(data[0], data[i]);
		buildHeap(data, 0);
	}
}

std::string toString(std::vector<int> v)
{
	std::string result = "";
	for (int i = 0; i < v.size(); i++)
	{
		result = result + std::to_string(v[i]) + " ";
	}
	result = result + "\n";
	return result;
}