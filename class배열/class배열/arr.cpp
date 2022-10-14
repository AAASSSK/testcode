#include "arr.h"
#include <iostream>

arr::arr()
	:count(0)
	,maxcount(2)
	,ptr(nullptr)
{
	ptr = new int[2];
	
}

arr::~arr()
{
	delete[] ptr;
}

void arr::push_back(int idata)
{
	if (count >= maxcount)
	{
		allocate(sizeof(int) * 2);
	}
	ptr[count++] = idata;
	
}

void arr::allocate(int receivesize)
{
	int* temp = new int[receivesize];
	for (int i = 0; i < count; ++i)
	{
		temp[i] = ptr[i];

	}
	maxcount = receivesize;


}

int& arr::operator[](int index)
{
	
	return ptr[index];
}



