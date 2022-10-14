#pragma once
typedef struct _tagArr
{
	int* ptr;
	int icount;
	int maxicount;

}tarr;

void inittarr(tarr* ptr);

void pushback(tarr* ptr, int data);

void locate(tarr* ptr);

void relasearr(tarr* ptr);