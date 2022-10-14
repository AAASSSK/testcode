#pragma once
template<typename T>
class arr
{
private:
	int icount;
	T* datanode;
	int maxicount;
public:
	void pushback(const T& idata);
	void resize(int resizecount);


public:
	arr()
		:icount(0)
		,datanode(nullptr)
		,maxicount(2)
	{
	}
	~arr()
	{
		delete[] datanode;
	}
	class iterator
	{
	private:
		T* mptr;
		int mcount;
	public:
		interator()
			:mptr(nullptr)
			,mcount(0)
		{
		}
	
	};
};

template<typename T>
void arr<T>::pushback(const T& idata)
{
	if (icount >= maxicount)
	{
		resize(maxicount * 2);
	}
	datanode[icount++] = idata;
}

template<typename T>
void arr<T>::resize(int resizecount)
{
	if (maxicount >= resizecount)
	{
		assert(nullptr);

	}
	T* newptr = new T[resizecount];
	for (int i = 0; i < icount; ++i)
	{
		newptr[i] = datanode[i];
	}
	maxicount = resizecount;
	datanode = newptr;

	
	
	
}
