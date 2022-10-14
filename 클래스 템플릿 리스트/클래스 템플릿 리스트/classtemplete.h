#pragma once

template <typename T>
class listnode
{
public:
	listnode<T>* nextnode;
	listnode<T>* prevnode;
	T idata;

public:
	listnode();
	listnode(const T& idata, listnode<T>* nextnode, listnode<T>* prevnode);
};


template<typename T>
class list
{
private:
	listnode<T>* firstnode;
	listnode<T>* tailnode;
	int icount;

public:
	list();
	~list();

public:
	void pushback(const T& idata);
	void pushfront(const T& idata);
	





};

template<typename T>
list<T>::list()
	:firstnode(nullptr)
	,tailnode(nullptr)
	,icount(0)
	
{
}

template<typename T>
list<T>::~list()
{
	listnode<T>* deletenode = firstnode;
	while (deletenode)
	{
		listnode<T>* next = deletenode->nextnode;
		delete deletenode;
		deletenode = next;
		
	}
}

template<typename T>
void list<T>::pushback(const T& idata)
{
	listnode<T>* newnode = new listnode<T>(idata, nullptr, nullptr);
	
		if (nullptr == firstnode)
		{
			firstnode = newnode;
			tailnode = newnode;
		}
		else
		{
			tailnode->nextnode = newnode;
			newnode->prevnode = tailnode;
			tailnode = newnode;
		}
		++icount;

}

template<typename T>
void list<T>::pushfront(const T& idata)
{
	listnode<T>* newnode = new listnode<T>(idata, nullptr, nullptr);
	if (nullptr == firstnode)
	{
		firstnode = newnode;
		tailnode = newnode;
	}
	else
	{
		firstnode->prevnode = newnode;
		newnode->nextnode = firstnode;
		firstnode = newnode;
	}
	++icount;


} 


template<typename T>
listnode<T>::listnode()
	:idata()
	,nextnode(nullptr)
	,prevnode(nullptr)
{
}

template<typename T>
listnode<T>::listnode(const T& idata, listnode<T>* nextnode, listnode<T>* prevnode)
	:idata(idata)
	, nextnode(nextnode)
	, prevnode(prevnode)
{
}
