/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:35:44 by wide-aze          #+#    #+#             */
/*   Updated: 2015/02/28 19:57:10 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"


/*
** MAP_GET(l, c, e)
*/

/*static void		do_action(t_act *act, t_env *env)
{
	int		save;

	while (act.y < env->map_size)
	{
		act.x = 0;
		while  (act.x < env->map_size)
		{
			save = act.x;
			while(act.x < env->map_size + 1 && MAP_GET(act.x + 1, act.y, env))
			{
				MAP_GET(act.x + 1, act.y, env) = MAP_GET(act.x, act.y, env);
				MAP_GET(act.x, act.y, env) = 0;
			}
			act.x = save + 1;
		}
		y++;
	}
}*/

void	action_down(t_env *env)
{
	t_act	act;

	act.dir = 'd';
	act.x = 0;
	act.y = env->map_size - 1;
	act.prev = 0;

	(void)act;
//	do_action(&act, env);
	put_rand(env);
}

void	action_up(t_env *env)
{
	(void)env;
/*	t_act	act;

	act.dir = 'u';
	act.x = 0;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env);
	put_rand(env);*/
}

void	action_left(t_env *env)
{
	(void)env;
/*	t_act	act;

	act.dir = 'l';
	act.x = 0;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env);
	put_rand(env);*/
}

void	action_right(t_env *env)
{
	(void)env;
/*	t_act	act;

	act.dir = 'r';
	act.x = env->map_size - 1;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env);
	put_rand(env);*/
}
