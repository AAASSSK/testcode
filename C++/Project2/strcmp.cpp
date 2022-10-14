typedef struct _tagmyst
{
	int a;
	float f;

}myst;


int getLength(const wchar_t* x)
{
	int i = 0;
	while (0!=x[i])
	{
		++i;
	}
	return i;
}

int strc(const wchar_t* x, const wchar_t* y)
{
	int left = getLength(x);
	int right = getLength(y);
	int result = 0;
	int result1;
	
	if (left > right)
	{
		result = -1;
		result1 = right;

	}
	else if (left < right)
	{
		result = 1;
		result1 = left;
	}
	else
	{
		result1 = left;
	}
	for (int i = 0; i < result1; ++i)
	{
		if (x[i] > y[i])
		{
			return -1;
		}
		else if (x[i] < y[i])
		{
			return 1;
		}
		else
		{
			return result;
		}

		
	}
	
	

}



int main()
{
	strc(L"elegent", L"gentle");
	(*pst).a = 100;
	pst->a = 100;
}

//

myst s = {};
myst* pst = &s;
//typedef int INT;




