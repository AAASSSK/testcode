#pragma once

typedef struct tagarr
{
	int count;
	int maxcount;
	int* iptr;
}arr;

void init(arr* sptr);
void cleandata(arr* sptr);
void adddata(arr* sptr, int data);
void extenddata(arr* sptr);
void bubblesort(arr* sptr);

