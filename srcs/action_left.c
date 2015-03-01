/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_left.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 10:15:57 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 11:18:32 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static void		do_action(t_env *env, int x, int y, int save)
{
	while (y < env->map_size)
	{
		x = 0;
		while (x <= env->map_size - 1)
		{
			save = x;
			while (x > 0 && MAP_GET(env, x, y) > 0
			&& MAP_GET(env, x - 1, y) == 0)
			{
				MAP_GET(env, x - 1, y) = MAP_GET(env, x, y);
				MAP_GET(env, x, y) = 0;
				x--;
			}
			if (x > 0 && MAP_GET(env, x, y) > 0
			&& MAP_GET(env, x - 1, y) == MAP_GET(env, x, y))
			{
				MAP_GET(env, x, y) = 0;
				MAP_GET(env, x - 1, y) *= 2;
				env->score += MAP_GET(env, x - 1, y);
			}
			x = save + 1;
		}
		y++;
	}
}

void			action_left(t_env *env)
{
	do_action(env, 0, 0, 0);
	put_rand(env);
}
