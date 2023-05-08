/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:07:21 by parrot            #+#    #+#             */
/*   Updated: 2023/05/07 21:44:32 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/minirt.h"

int     ft_close(t_mlx *mlx)
{
	mlx_destroy_window(mlx->mlx, mlx->win);
	free(mlx);
	ft_perror("NICE COOK\n", 0);
	return (0);
}

int     key_hook(int k, t_mlx *mlx)
{
	if (k == KEY_ESC || k == KEY_X)
	{
		mlx_destroy_window(mlx->mlx, mlx->win);
		free(mlx);
		ft_perror("NICE COOK\n", 0);
	}
	return (0);
}

void    mlx_look(t_mlx *mlx)
{
	// mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img, 0, 0);
	// str_put(d);
	mlx_key_hook(mlx->win, key_hook, mlx);
	mlx_hook(mlx->win, 17, 1L << 0, ft_close, mlx);
	// mlx_mouse_hook(d->win, mouse_hook, d);
	mlx_loop(mlx->mlx);
	free(mlx);
}