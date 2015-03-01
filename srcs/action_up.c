/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 10:15:47 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 11:04:02 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static void		do_action(t_env *env, int x, int y, int save)
{
	while (x < env->map_size)
	{
		y = 0;
		while (y <= env->map_size - 1)
		{
			save = y;
			while (y > 0 && MAP_GET(env, x, y) > 0
			&& MAP_GET(env, x, y - 1) == 0)
			{
				MAP_GET(env, x, y - 1) = MAP_GET(env, x, y);
				MAP_GET(env, x, y) = 0;
				y--;
			}
			if (y > 0 && MAP_GET(env, x, y) > 0
			&& MAP_GET(env, x, y - 1) == MAP_GET(env, x, y))
			{
				MAP_GET(env, x, y) = 0;
				MAP_GET(env, x, y - 1) *= 2;
				env->score += MAP_GET(env, x, y - 1);
			}
			y = save + 1;
		}
		x++;
	}
}

void			action_up(t_env *env)
{
	do_action(env, 0, 0, 0);
	put_rand(env);
}