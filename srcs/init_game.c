/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 11:26:18 by wide-aze          #+#    #+#             */
/*   Updated: 2015/02/28 16:40:58 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <stdlib.h>

static void		init_map(t_env *env, int size)
{
	int				i;

	env->game.map = MAL(int*, size);
	i = -1;
	while (++i < size)
		env->game.map[i] = ft_memalloc(S(int, size));
}

void			init_game(t_env *env, int size)
{
	init_map(env, size);
	env->game.size = size;
	env->game.score = 0;
	// ?
	draw_game(env); // tmp
	return ;
}
