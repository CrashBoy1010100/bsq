/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matascon <matascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 17:25:14 by matascon          #+#    #+#             */
/*   Updated: 2020/02/25 19:09:00 by matascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include "first_line_file.h"
# include "point_master.h"

int		error(int argc);
void	print_error(void);
char	**ft_matrix(char *argv);
void	read_first_line(char *argv);
char	**analyze_matrix(char **matrix);
char	**paint_matrix(char **matrix);
void	print_matrix(char **matrix);
#endif
