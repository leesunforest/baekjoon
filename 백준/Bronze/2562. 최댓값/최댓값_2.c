#include <stdio.h>
int main()
{
	int max = 0;
	int index;
	int num;

	for (int i = 0; i < 9; ++i)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
			index = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", index);
}
