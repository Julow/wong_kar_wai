/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:32:42 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/01 13:08:08 by jaguillo         ###   ########.fr       */
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
	init_color(9, 1000, 1000, 1000);
	init_color(10, 466, 431, 396);
	init_color(11, 566, 531, 500);
	init_color(12, 933, 878, 784);
	init_color(13, 949, 694, 474);
	init_color(14, 960, 584, 388);
	init_color(15, 960, 400, 350);
	init_color(16, 960, 400, 350);
	init_color(17, 960, 400, 350);
	init_pair(1, COLOR_BLACK, 10);
	init_pair(2, COLOR_BLACK, 11);
	init_pair(3, COLOR_BLACK, 12);
	init_pair(4, 9, 13);
	init_pair(5, 9, 14);
	init_pair(6, 9, 15);
	init_pair(7, 9, 16);
	init_pair(8, 9, 17);
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
