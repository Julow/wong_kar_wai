/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:35:44 by wide-aze          #+#    #+#             */
/*   Updated: 2015/02/28 17:57:15 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static void		do_action(t_act *act, int **map)
{

}

void	action_down(t_env *env)
{
	t_act	act;

	act.dir = 'd';
	act.x = env->map_size - 1;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env->map);
}

void	action_up(t_env *env)
{
	t_act	act;

	act.dir = 'd';
	act.x = env->map_size - 1;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env->map);
}

void	action_left(t_env *env)
{
	t_act	act;

	act.dir = 'd';
	act.x = env->map_size - 1;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env->map);
}

void	action_right(t_env *env)
{
	t_act	act;

	act.dir = 'd';
	act.x = env->map_size - 1;
	act.y = 0;
	act.prev = 0;
	do_action(&act, env->map);
}
