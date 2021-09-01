//TODO include 42 header
#ifndef MAP_H
# define MAP_H

/* 'obstacles' will contain $height int arrays.
 * 
 * obstacles[i] cotains the postions of 
 * the obstacles on the ith row, 
 * preceded by the num of obsts
 * (in obsts[i][0])
 *
 * the "walls" of the map (in col -1 
 * and $width) count as obsts
 * 
 * eg :
 * --o---o-o -> {5, -1, 2, 6, 8, 9} */
typedef struct s_map
{
	int	width;
	int	height;
	int	**obsts;
}	t_map;

/* create a map and allocs 'obstacles' (not its subarrays) 
 * in case of failure returns NULL */
t_map	ft_acreate_map(int width, int height);
void	ft_free_map(t_map m);

#endif 
