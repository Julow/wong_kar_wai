/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:06:47 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 14:41:24 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>

void

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
