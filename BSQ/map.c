#include <stdlib.h>
#include "map.h"

t_map	ft_acreate_map(int width, int height)
{
	t_map	map;

	map.width = width;
	map.height = height;
	map.obsts = malloc (sizeof(int *) * height);
	if (map.obsts == NULL)
		map.width = -1;
	return (map);
}

void	ft_free_map(t_map m)
{
	int	i;

	i = 0;
	while (i < m.height)
		free(m.obsts[i++]);
	free (m.obsts);
}
