/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:52:52 by parrot            #+#    #+#             */
/*   Updated: 2023/05/07 21:53:22 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/minirt.h"

void	put_pixel_img(t_mlx *mlx, int x, int y, int color)
{
	*(unsigned int *)(mlx->addr + (y * mlx->line_length + x
		* (mlx->bits_per_bits / 8))) = color;
}
