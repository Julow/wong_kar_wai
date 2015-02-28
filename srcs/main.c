/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:32:42 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 19:03:29 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>

static void		init_ncurses(void)
{
	initscr();
	noecho();
	keypad(stdscr, TRUE);
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
