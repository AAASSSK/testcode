#pragma once

typedef struct tagarr
{
	node* fristnode;
	int count;
}arr;

typedef struct tagnode
{
	struct tagnode* nextnode;
	int idata;
}node;

void init(arr* ptrptr);
void pushback(arr* ptrptr, int data);
void pushfront(arr* ptrptr, int data);
void clean(arr* ptrptr);
void cleanj(node* fristnode);