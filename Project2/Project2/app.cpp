#include "app.h"
#include <iostream>

void inittarr(tarr* ptr)
{
	(*ptr).ptr = (int*)malloc(8);
	(*ptr).icount = 0;
	(*ptr).maxicount = 2;
}

void pushback(tarr* ptr, int data)
{
	if ((*ptr).icount >= (*ptr).maxicount)
	{
		locate(ptr);
	}

	(*ptr).ptr[(*ptr).icount++] = data;
}

void locate(tarr* ptr)
{
	int* newptr = (int*)malloc((*ptr).maxicount * 2 * 4);
	for (int i = 0; i < (*ptr).icount; ++i)
	{
		newptr[i] = (*ptr).ptr[i];
		free((*ptr).ptr);
		(*ptr).ptr = newptr;
		ptr->maxicount *= 2;
	}

}

void relasearr(tarr* ptr)
{
	free((*ptr).ptr);
	(*ptr).icount = 0;
	(*ptr).maxicount = 0;

}
