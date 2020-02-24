/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:22:44 by matascon          #+#    #+#             */
/*   Updated: 2020/02/24 17:27:24 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"

int		error(int argc)
{
	if (argc < 2)
		return (0);
	return (1);
}

void	print_error(void)
{
	write(1, "error\n", 7);
}
