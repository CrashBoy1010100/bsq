/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:24:46 by matascon          #+#    #+#             */
/*   Updated: 2020/02/25 16:16:18 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"
#include "first_line_file.h"
#include "point_master.h"

char	**turn_back(char **m)
{
	int i;
	int	j;

	i = 0;
	while (m[i][0] >= 48 && m[i][0] <= 57)
	{
		j = 0;
		while (m[i][j] >= 48 && m[i][j] <= 57)
		{
			if (m[i][j] == '0')
				m[i][j] = info.obstacle;
			else
				m[i][j] = info.empty;
			j++;
		}
		i++;
	}
	return (m);
}

char	**fill_matrix(char **m)
{
	int i;
	int j;
	int point_final;

	i = point.i;
	point_final = point.value - 48;
	while (i < point_final)
	{
		j = point.j;
		while (j < j + 8)
		{
			//m[i][j] = info.full;
			j++;
		}
		i++;
	}
	printf("%d", point_final);
	return (m);
}

char	**paint_matrix(char **matrix)
{
	matrix = turn_back(matrix);
	//matrix = fill_matrix(matrix);
	return (matrix);
}
