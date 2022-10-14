#include "arr.h"
#include <iostream>
#include <stdio.h>



int main()
{
	arr s;
	init(&s);
	adddata(&s, 14);
	adddata(&s, 13);
	adddata(&s, 20); 
	adddata(&s, 1);
	adddata(&s, 9);
	adddata(&s, 7); 
	adddata(&s, 6);
	adddata(&s, 4);


	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", s.iptr[i]);
	}

	bubblesort(&s);

	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", s.iptr[i]);
	}



	cleandata(&s);

}