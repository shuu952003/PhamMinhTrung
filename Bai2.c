#include <stdio.h>
#include <conio.h>
#include <math.h>

bool KT_SCP(int x)
{
	int a = sqrt((float)x);
	if (a*a == x)
		return true;
	return false;

}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf_s("%d", &n);
	printf("So chinh phuong nho hon n la: ");
	for (int i = 1; i <= n; i++)
	{
		if (KT_SCP(i) == true)
			printf("%d ", i);
	}
	
	_getch();
}
