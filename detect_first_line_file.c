/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_first_line_file.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 08:36:37 by matascon          #+#    #+#             */
/*   Updated: 2020/02/25 11:01:43 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.h"
#include "first_line_file.h"

void	detect_info(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		info.number[i] = str[i];
		i++;
	}
	info.empty = str[i];
	info.obstacle = str[++i];
	info.full = str[++i];
}

void	read_first_line(char *argv)
{
	char	*str;
	int		descriptor;
	int		i;

	str = NULL;
	descriptor = open(&*argv, O_RDONLY);
	i = 0;
	while (read(descriptor, &str, 1))
		i++;
	close(descriptor);
	str = (char *)malloc(i);
	if (str == NULL)
		exit(1);
	descriptor = open(&*argv, O_RDONLY);
	read(descriptor, str, i);
	close(descriptor);
	detect_info(str);
}
