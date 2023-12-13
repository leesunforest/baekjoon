#include <stdio.h>

int	main(void)
{
	int	h;
	int	m;
	int	t;

	scanf("%d %d\n %d", &h, &m, &t);

	if ((m + t) < 60)
		printf("%d %d", h, m + t);
	else
		printf("%d %d", (h + ((m + t) / 60)) % 24, (m + t) % 60);
}
