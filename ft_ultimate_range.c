#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc (sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
#include <stdio.h>
#include <unistd.h>
int main()
{
	int min = 10;
	int	max =20;
	int i = 0;
	int	*pointer;
	ft_ultimate_range(&pointer, min, max);
	while (i < max - min)
	{
		printf("%i\n", pointer[i]);
		i++;
	}
	return (0);
}
