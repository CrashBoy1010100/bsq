/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 11:49:19 by matascon          #+#    #+#             */
/*   Updated: 2020/02/25 18:26:22 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"
#include "first_line_file.h"
#include "point_master.h"

char	**put_main_numbers(char **matrix)
{
	int i;

	i = -1;
	while (matrix[0][++i] != '\0')
	{
		if (matrix[0][i] == info.empty)
			matrix[0][i] = '1';
		else if (matrix[0][i] == info.obstacle)
			matrix[0][i] = '0';
	}
	i = -1;
	while (matrix[++i][0] != '\0')
	{
		if (matrix[i][0] == info.empty)
			matrix[i][0] = '1';
		else if (matrix[i][0] == info.obstacle)
			matrix[i][0] = '0';
	}
	return (matrix);
}

char	**find_values(char **m)
{
	int	i;
	int	j;

	i = 0;
	while (m[++i][0] != 0)
	{
		j = 0;
		while (m[i][++j] != 0)
		{
			if (m[i][j] == info.obstacle)
				m[i][j] = '0';
			else if (m[i][j - 1] <= m[i - 1][j - 1]
			&& m[i][j - 1] <= m[i - 1][j])
				m[i][j] = m[i][j - 1] + 1;	
			else if (m[i - 1][j - 1] <= m[i][j - 1]
			&& m[i - 1][j - 1] <= m[i - 1][j])
				m[i][j] = m[i - 1][j - 1] + 1;
			else if (m[i - 1][j] <= m[i - 1][j - 1]
			&& m[i - 1][j] <= m[i][j - 1])
				m[i][j] = m[i - 1][j] + 1;
		}
	}
	return (m);
}

void	find_point(char **m)
{
	int	i;
	int	j;

	point.i = 0;
	point.j = 0;
	point.value = '0';
	i = 0;
	while (m[i][0] >= 48 && m[i][0] <= 57)
	{
		j = 0;
		while (m[i][j] >= 48 && m[i][j] <= 57)
		{
			if (m[i][j] > point.value)
			{
				point.value = m[i][j];
				point.i = (i + 1) - (point.value - 48);
				point.j = (j + 1) - (point.value - 48);
			}
			j++;
		}
		i++;
	}
}

char	**analyze_matrix(char **matrix)
{
	matrix = put_main_numbers(matrix);
	matrix = find_values(matrix);
	find_point(matrix);
	return (matrix);
}
