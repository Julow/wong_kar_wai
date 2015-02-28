/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:35:44 by wide-aze          #+#    #+#             */
/*   Updated: 2015/02/28 18:29:26 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static void		do_action(t_act *act, int **map)
{
	(void)act;
	(void)map;
}

void	action_down(t_env *env)
{
	t_act	act;

	act.dir = 'd';
	act.x = env->map_size - 1;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env->map);
	put_rand(env);
}

void	action_up(t_env *env)
{
	t_act	act;

	act.dir = 'd';
	act.x = env->map_size - 1;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env->map);
	put_rand(env);
}

void	action_left(t_env *env)
{
	t_act	act;

	act.dir = 'd';
	act.x = env->map_size - 1;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env->map);
	put_rand(env);
}

void	action_right(t_env *env)
{
	t_act	act;

	act.dir = 'd';
	act.x = env->map_size - 1;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env->map);
	put_rand(env);
}
