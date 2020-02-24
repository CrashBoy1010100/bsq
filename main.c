/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:13:22 by matascon          #+#    #+#             */
/*   Updated: 2020/02/24 17:39:59 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "libraries.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**matrix;

	matrix = NULL;
	matrix = ft_matrix(argv[1], matrix);
	i = argc - argc - 1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 27)
		{
			write(1, &matrix[i][j], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
