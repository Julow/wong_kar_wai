/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_right.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 10:16:05 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 17:08:58 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static void		move_nb_right(t_env *env, int *x, int y)
{
	while (*x < env->map_size - 1 && MAP_GET(env, *x, y) > 0
	&& MAP_GET(env, *x + 1, y) == 0)
	{
		MAP_GET(env, *x + 1, y) = MAP_GET(env, *x, y);
		MAP_GET(env, *x, y) = 0;
		(*x)++;
		env->moved = true;
	}
}

static void		merge_if_needed(t_env *env, int x, int y)
{
	if (x < env->map_size - 1 && MAP_GET(env, x, y) > 0
	&& MAP_GET(env, x + 1, y) == MAP_GET(env, x, y) && !env->last_merged)
	{
		MAP_GET(env, x, y) = 0;
		MAP_GET(env, x + 1, y) *= 2;
		env->score += MAP_GET(env, x + 1, y);
		env->last_merged = true;
		env->moved = true;
	}
}

static void		do_action(t_env *env, int x, int y, int save)
{
	while (++y < env->map_size)
	{
		x = env->map_size - 1;
		env->last_merged = false;
		while (x >= 0)
		{
			save = x;
			move_nb_right(env, &x, y);
			merge_if_needed(env, x, y);
			x = save - 1;
		}
	}
}

void			action_right(t_env *env)
{
	env->moved = false;
	do_action(env, 0, -1, 0);
	if (env->moved)
		put_rand(env);
}
