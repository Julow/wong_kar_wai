/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:07:23 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:49:49 by jaguillo         ###   ########.fr       */
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
		if (rect.y != middle)
			WPUT(rect.x, rect.y++, "% *c", rect.width, ' ');
	len = (rect.width - ft_itoab(nb, str)) / 2;
	WPUT(rect.x, middle, "% *c%s% *c", len, ' ', str, len, ' ');
}

void			draw_game(t_env *env)
{
	t_rect			cell;
	t_pt			i;

	clear();
	cell = RECT(0, 0, env->width / env->game.size,
		env->height / env->game.size);
	i.y = -1;
	while (++i.y < env->game.size)
	{
		i.x = -1;
		while (++i.x < env->game.size)
		{
			draw_cell(cell, MAP_GET(env, i.x, i.y));
			cell.x += cell.width;
			cell.y += cell.height;
		}
	}
	refresh();
	while (1)
		;
}
