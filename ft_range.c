#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	range = max - min;
	array = (int *) malloc(range * sizeof(int));
	if (!array)
		return (NULL);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
