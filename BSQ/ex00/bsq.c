/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rastle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:34:20 by rastle            #+#    #+#             */
/*   Updated: 2018/04/02 18:34:24 by rastle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

sometype	maptr(char **map, int x, char e, char o, char f)
{	
	int **array;
	int i;
	int j;


	i = 0;
	j = 0;
	array = (int **)malloc(sizeof(*map) + 1)
	while (*map[i] < x)
	{
		while (map[j] != '\n')
		{
			if (map[i][j] == e)
				array[i][j] = 1;
			else
				array[i][j] = 0;
			j++;
		}
		i++;
	}
}

int			min(int x, int y, int z)
{
	//check value of x v y
	//check y v z
	//check x v z
	//return lowest value of xyz
}

int		sqfind(char **array)
{
	int i;
	int j;


	while (**array)
	{
		//check 1st position
		while (array[i][j] != 1)
			//increment 
	}
}
void	print(char **array)
{

}


