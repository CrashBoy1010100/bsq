/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:06:49 by matascon          #+#    #+#             */
/*   Updated: 2020/02/25 20:11:18 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

void	print_matrix(char **matrix)
{
	int i;
	int j;
	int x;
	int y;

	x = 0;
	y = 0;
	while (matrix[y][0] >= 32 && matrix[y][0] <= 126)
		y++;
	while (matrix[0][x] >= 32 && matrix[0][x] <= 126)
		x++;
	i = -1;
	while (++i < y)
	{
		j = -1;
		while (++j < x)
			write(1, &matrix[i][j], 1);
		write(1, "\n", 1);
	}
}
