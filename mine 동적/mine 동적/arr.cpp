#include "arr.h"
#include <iostream>

void init(arr* sptr)
{
	sptr->iptr = (int*)malloc(2 * sizeof(int));
	sptr->count = 0;
	sptr->maxcount = 2;

}

void cleandata(arr* sptr)
{
	free(sptr->iptr);
	sptr->count = 0;
	sptr->maxcount = 0;
}

void adddata(arr* sptr, int data)
{
	if ((sptr->count) >= (sptr->maxcount))
	{
		extenddata(sptr);
	}
	sptr->iptr[sptr->count++] = data;
}

void extenddata(arr* sptr)
{
	int* nptr = (int*)malloc(sptr->maxcount * sizeof(int) * 2);
	sptr->maxcount *= 2;
	for (int i = 0; i < sptr->count; ++i)
	{
		nptr[i] = sptr->iptr[i];
		
	}
	free(sptr->iptr);
	sptr->iptr = nptr;
	


}

void bubblesort(arr* sptr)
{
	for (int j=0;j<sptr->count-1;++j)
	{
		for (int i = 0; i < sptr->count - j-1; ++i)
		{
			if (sptr->iptr[i] > sptr->iptr[i + 1])
			{
				int spot = sptr->iptr[i + 1];
				sptr->iptr[i + 1] = sptr->iptr[i];
				sptr->iptr[i] = spot;


			}
		}
	}
}
