/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 11:26:18 by wide-aze          #+#    #+#             */
/*   Updated: 2015/02/28 17:58:07 by jaguillo         ###   ########.fr       */
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
	env->state = STATE_PLAYING;
	start_game(env);
	env->state = STATE_IDDLE;
	return ;
}
