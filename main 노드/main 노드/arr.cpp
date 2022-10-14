#include "arr.h"
#include <iostream>

void init(arr* ptrptr)
{
	ptrptr->fristnode = nullptr;
	ptrptr->count = 0;
}

void pushback(arr* ptrptr, int data)
{
	node* pnode = (node*)malloc(sizeof(node));
	pnode->idata = data;
	if (ptrptr->fristnode = nullptr)
	{
		ptrptr->fristnode = pnode;

	}
	else
	{
		node* pnewnode = ptrptr->fristnode;
		while (true)
		{
			if (nullptr == pnewnode->nextnode)
			{
				break;
			}
			pnewnode = pnewnode->nextnode;

		}
		pnewnode->nextnode= pnode;
	}
	++ptrptr->count;
}

void pushfront(arr* ptrptr, int data)
{
	node* pnode = (node*)malloc(sizeof(node));
	pnode->idata = data;
	if (0 == ptrptr->count)
	{
		ptrptr->fristnode = pnode;

	}
	else
	{
		node* tempnode = ptrptr->fristnode->nextnode;
		ptrptr->fristnode->nextnode = pnode;
		mpnode;
	}
}


void cleanj(node* fristnode)
{
	if (nullptr == fristnode)
	{
		return;
	}
	cleanj(fristnode->nextnode);
	free(fristnode);
}

void clean(arr* ptrptr)
{
	node* deletenode = ptrptr->fristnode;
	
	for (int i = 0; i < ptrptr->count; ++i)
	{
		node *tempnode = deletenode->nextnode;
		free(deletenode);
		deletenode = tempnode;
	}
}


