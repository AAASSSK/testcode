#pragma once
class arr
{
private:
	int count;
	int maxcount;
	int* ptr;

public:
	arr();
	~arr();
public:
	void push_back(int idata);
	void allocate(int receivesize);
	int& operator[] (int index);
};

