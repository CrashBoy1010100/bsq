/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:13:22 by matascon          #+#    #+#             */
/*   Updated: 2020/02/25 18:30:14 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"
#include "bsq.h"

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**matrix;

	matrix = NULL;
	if (error(argc) == 0)
		print_error();
	else
	{
		matrix = ft_matrix(argv[1]);
		read_first_line(argv[1]);
		matrix = analyze_matrix(matrix);
		matrix = paint_matrix(matrix);
		
		printf("\n");
		i = -1;
		while (++i < 9)
		{
			j = -1;
			while (++j < 27)
			{
				write(1, &matrix[i][j], 1);
			}
			write(1, "\n", 1);
		}
		printf("\n\n%i %i %c\n", point.i, point.j, point.value);
	}
	return (0);
}
