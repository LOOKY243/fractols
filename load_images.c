/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:19:29 by gmarre            #+#    #+#             */
/*   Updated: 2023/12/06 17:43:23 by gmarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

mlx_image_t	*ft_get_image(mlx_t *mlx, const char *image_file)
{
	mlx_image_t		*img;
	mlx_texture_t	*texture;

	img = mlx_new_image(mlx, 64, 64);
	texture = mlx_load_png(image_file);
	img = mlx_texture_to_image(mlx, texture);
	return (img);
}

void	load_player(t_game *param)
{
	param->images->player = ft_get_image(param->mlx,
			"textures/front_stand.png");
}

void	ft_load_images(t_game *param)
{
	param->images = ft_calloc(1, sizeof(t_images));
	load_player(param);
	param->images->floor = ft_get_image(param->mlx, "textures/floor.png");
	param->images->coin = ft_get_image(param->mlx,
			"textures/coin.png");
	param->images->exit = ft_get_image(param->mlx,
			"textures/exit.png");
	param->images->bot = ft_get_image(param->mlx,
			"textures/walls/bot.png");
	param->images->right = ft_get_image(param->mlx,
			"textures/walls/right.png");
	param->images->bot_right = ft_get_image(param->mlx,
			"textures/walls/bot_right.png");
	param->images->top = ft_get_image(param->mlx,
			"textures/walls/top.png");
	param->images->top_left = ft_get_image(param->mlx,
			"textures/walls/top_left.png");
	param->images->top_right = ft_get_image(param->mlx,
			"textures/walls/top_right.png");
	param->images->left = ft_get_image(param->mlx,
			"textures/walls/left.png");
	param->images->bot_left = ft_get_image(param->mlx,
			"textures/walls/bot_left.png");
	param->images->middle = ft_get_image(param->mlx,
			"textures/walls/middle.png");
}
