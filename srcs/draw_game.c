/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:07:23 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 17:38:47 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>

static void		draw_cell(t_rect rect, int nb)
{
	char			str[12];
	int				len;
	int				middle;

	middle = rect.height / 2 + rect.y;
	rect.height += rect.y;
	while (rect.y < rect.height)
	{
		if (rect.y != middle)
			WPUT(rect.x, rect.y, "% *c", rect.width, ' ');
		rect.y++;
	}
	len = (rect.width - ft_itoab(nb, str)) / 2;
	WPUT(rect.x, middle, "% *c%s% *c", len, ' ', str, len, ' ');
}

void			draw_game(t_env *env)
{
	t_rect			cell;
	t_pt			i;

	clear();
	WPUT(0, 0, "Score: %d", env->game.score);
	cell = RECT(0, 0, env->width / env->game.size,
		env->height / env->game.size);
	i.y = -1;
	while (++i.y < env->game.size)
	{
		cell.y = i.y * cell.height + 1;
		i.x = -1;
		while (++i.x < env->game.size)
		{
			cell.x = i.x * cell.width;
			draw_cell(cell, MAP_GET(env, i.x, i.y));
		}
	}
	refresh();
	while (1)
		;
}
