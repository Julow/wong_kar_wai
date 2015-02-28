/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 11:26:18 by wide-aze          #+#    #+#             */
/*   Updated: 2015/02/28 11:35:49 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <libft.h>

void			init_game(t_env *env, int size)
{
	int				map[size][size];

	ft_memset(map, 0, size * size);
	env->game.size = size;
	env->game.map = map;
	// ?
	return ;
}
