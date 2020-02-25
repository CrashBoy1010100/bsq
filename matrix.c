/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:22:20 by matascon          #+#    #+#             */
/*   Updated: 2020/02/25 11:47:55 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

char	**memory(int size, int n_row)
{
	char	**matrix;
	int		n_column;

	matrix = NULL;
	n_column = size / n_row;
	matrix = (char **)malloc(n_row);
	size = -1;
	while (++size < n_row)
		matrix[size] = (char *)malloc(n_column);
	return (matrix);
}

char	**values(int i, int j, char *str)
{
	char	**matrix;
	int		k;

	matrix = NULL;
	matrix = memory(i, j);
	i = 0;
	while (str[i] != '\n')
		i++;
	j = 0;
	k = -1;
	while (str[++i] != 0)
	{
		if (str[i] == '\n')
		{
			i++;
			j++;
			k = -1;
		}
		matrix[j][++k] = str[i];
	}
	return (matrix);
}

char	**ft_matrix(char *argv)
{
	char	**matrix;
	char	*str;
	int		i[3];

	str = NULL;
	matrix = NULL;
	i[0] = open(&*argv, O_RDONLY);
	i[1] = 0;
	while (read(i[0], &str, 1))
		i[1]++;
	close(i[0]);
	str = (char *)malloc(i[1]);
	if (str == NULL)
		return (NULL);
	i[0] = open(&*argv, O_RDONLY);
	i[1] = -1;
	i[2] = 0;
	while (read(i[0], &str[++i[1]], 1))
	{
		if (str[i[1]] == '\n')
			i[2]++;
	}
	close(i[0]);
	matrix = values(i[1], i[2], str);
	return (matrix);
}
