#include <stdio.h>
#include <conio.h>


int main()
{
	printf("So nguyen co 2 chu so va la boi cua 7:");
	for (int i = 10; i < 100; i++)
	{
		if (i % 7 == 0)
			printf("%d ", i);
	}
	_getch();
}
