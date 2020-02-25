/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:13:22 by matascon          #+#    #+#             */
/*   Updated: 2020/02/25 11:01:57 by matascon         ###   ########.fr       */
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
	if (!error(argc))
		print_error();
	matrix = ft_matrix(argv[1]);
	read_first_line(argv[1]);
	printf("%s", info.number);
	printf("%c", info.empty);
	printf("%c", info.obstacle);
	printf("%c", info.full);


	printf("\n\n");
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
	return (0);
}
