/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:22:20 by matascon          #+#    #+#             */
/*   Updated: 2020/02/24 18:03:37 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

/*char	**ft_memory(int i, int j, char *str, char **matrix)
{
	int k;

	return (matrix);
}*/

char	**ft_matrix(char *argv, char **matrix)
{
	int		descriptor;
	char	*str;
	int		i;
	int		j;
	int		k;

	str = NULL;
	matrix = NULL;
	descriptor = open(&*argv, O_RDONLY);
	str = malloc(8192);
	i = -1;
	j = 0;
	while (read(descriptor, &str[++i], 1))
	{
		if (str[i] == '\n')
			j++;
	}
	k = i / j;
	matrix = (char **)malloc(j);
	i = -1;
	while (++i < j)
		matrix[i] = (char *)malloc(k);
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	j = 0;
	k = 0;
	while (str[i] != 0)
	{
		if (str[i] == '\n')
		{
			i++;
			j++;
			k = 0;
		}
		matrix[j][k] = str[i];
		i++;
		k++;
	}
	return (matrix);
}
