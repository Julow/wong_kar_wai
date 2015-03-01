/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 11:26:18 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 14:41:26 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <stdlib.h>

static void		init_map(t_env *env, int size)
{
	int				i;

	env->map = MAL(int*, size);
	i = -1;
	while (++i < size)
		env->map[i] = ft_memalloc(S(int, size));
}

void			init_game(t_env *env, int size)
{
	init_map(env, size);
	env->map_size = size;
	env->score = 0;
	env->win_state = false;
	put_rand(env);
	put_rand(env);
	start_game(env);
	return ;
}
