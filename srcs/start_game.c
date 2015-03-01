/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:06:47 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 15:19:50 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>

static t_bool	check_game(t_env *env)
{
	int		i;
	int		j;

	if (count_void_cases(env) == 0)
		return (end_menu(env), true);
	i = -1;
	while (!env->win && ++i < env->map_size)
	{
		j = -1;
		while (++j < env->map_size)
		{
			if (env->map[i][j] == WIN_VALUE)
				return (env->win = true, win_menu(env), true);
		}
	}
	return (false);
}

void			start_game(t_env *env)
{
	int		key;

	draw_game(env);
	while ((key = getch()) != 27)
	{
		if (key == KEY_DOWN)
			action_down(env);
		else if (key == KEY_UP)
			action_up(env);
		else if (key == KEY_LEFT)
			action_left(env);
		else if (key == KEY_RIGHT)
			action_right(env);
		else if (!update_size(env))
			continue ;
		if (check_game(env))
			return ;
		draw_game(env);
	}
}
