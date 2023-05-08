/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parrot <parrot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:23:53 by parrot            #+#    #+#             */
/*   Updated: 2023/05/07 21:52:19 by parrot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/minirt.h"

int	main(int ac, char *av[])
{
	t_mlx	*mlx;

	if (ac != 2)
		ft_perror(ERR, 1);
	mlx = ft_calloc(1, sizeof(mlx));
	mlx->mlx = mlx_init();
	mlx->win = mlx_new_window(mlx->mlx, HW, HW, av[1]);
	mlx->img = mlx_new_image(mlx->mlx, HW, HW);
	// mlx->addr = mlx_get_data_addr(mlx->img, &mlx->bits_per_bits,
	// 	&mlx->line_length, &mlx->endian);
	// mlx->i = -1;
	// while (++mlx->i < 2)
	// {
	// 	mlx->j = -1;
	// 	while (++mlx->j < 2)
			// put_pixel_img(mlx, 5, 5, RED);
	// }
	// mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img, 0, 0);
	// mlx_loop(mlx->mlx);

	// mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img, 0, 0);
	mlx_look(mlx);
	return (0);
}
