/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:17:48 by parrot            #+#    #+#             */
/*   Updated: 2023/05/07 21:51:59 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include "structs.h"

# define ERR "USAGE: ./miniRT file_name.rt\n"

/* EVENT */
int     ft_close(t_mlx *mlx);
int     key_hook(int k, t_mlx *mlx);
void    mlx_look(t_mlx *mlx);

/* GRAPHIC */
void	put_pixel_img(t_mlx *mlx, int x, int y, int color);

#endif