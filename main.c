/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:13:22 by matascon          #+#    #+#             */
/*   Updated: 2020/02/26 18:14:18 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"
#include "bsq.h"

int		main(int argc, char **argv)
{
	char	**matrix;
	int		i;

	if (error(argc) == 0)
		print_error();
	else
	{
		i = 0;
		while (argv[++i] != NULL)
		{
			matrix = NULL;
			matrix = ft_matrix(argv[i]);
			read_first_line(argv[i]);
			matrix = analyze_matrix(matrix);
			matrix = paint_matrix(matrix);
			print_matrix(matrix);
			free(matrix);
			write(1, "\n", 1);
		}
	}
	return (0);
}
