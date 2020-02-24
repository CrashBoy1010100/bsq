/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:22:20 by matascon          #+#    #+#             */
/*   Updated: 2020/02/24 18:55:33 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

char	**ft_memory(int size, int n_row)
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

char	**ft_values(int i, int j, char *str)
{
	char	**matrix;
	int		k;

	matrix = NULL;
	matrix = ft_memory(i, j);
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
			k = 0;
		}
		matrix[j][++k] = str[i];
	}
	return (matrix);
}

char	**ft_matrix(char *argv)
{
	int		descriptor;
	char	**matrix;
	char	*str;
	int		i;
	int		j;

	str = NULL;
	matrix = NULL;
	descriptor = open(&*argv, O_RDONLY);
	str = malloc(8192);
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (read(descriptor, &str[++i], 1))
	{
		if (str[i] == '\n')
			j++;
	}
	matrix = ft_values(i, j, str);
	return (matrix);
}
