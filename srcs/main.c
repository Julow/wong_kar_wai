/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:32:42 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 11:49:24 by jaguillo         ###   ########.fr       */
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

	init_ncurses();
	start_menu(&env);
	endwin();
	return (0);
}
