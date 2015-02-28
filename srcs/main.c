/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:32:42 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 19:42:31 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>

static void		init_ncurses(void)
{
	initscr();
	noecho();
	keypad(stdscr, TRUE);
	start_color();
	init_color(1, 933, 894, 854);
	init_color(2, 933, 878, 784);
	init_color(3, 949, 694, 474);
	init_color(4, 960, 584, 388);
	init_color(5, 500, 500, 500);
	init_color(6, 500, 500, 500);
	init_color(7, 500, 500, 500);
	init_pair(1, COLOR_BLACK, 1);
	init_pair(2, COLOR_BLACK, 2);
	init_pair(3, COLOR_WHITE, 3);
	init_pair(4, COLOR_WHITE, 4);
	init_pair(5, COLOR_WHITE, 5);
	init_pair(6, COLOR_WHITE, 6);
	init_pair(7, COLOR_WHITE, 7);
}

int				main(void)
{
	t_env			env;

	env = (t_env){NULL, 0, 0, 0, 0};
	if (!is_power(WIN_VALUE, 2) || WIN_VALUE < 2)
		return (ft_putstr_fd("Error: WIN_VALUE is not valid\n", 2), 1);
	init_ncurses();
	update_size(&env);
	start_menu(&env);
	clear();
	refresh();
	endwin();
	return (0);
}
