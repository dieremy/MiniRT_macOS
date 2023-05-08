/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:37:55 by parrot            #+#    #+#             */
/*   Updated: 2023/05/07 21:56:34 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_mlx
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_bits;
	int		line_length;
	int		endian;
}				t_mlx;

// typedef struct s_plane
// {
// 	int	x;
// 	int	y;
// }				t_plane;

// typedef struct s_mini
// {
// 	t_mlx			mlx;
// 	t_scene			scene;
// 	t_camera		camera;
// 	t_list			*light_p;
// 	t_light_ambient	light_a;
// 	t_answer		asw;
// }				t_mini;

#endif