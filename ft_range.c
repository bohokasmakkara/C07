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
