/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:32:42 by jaguillo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/02/28 16:53:14 by wide-aze         ###   ########.fr       */
=======
/*   Updated: 2015/02/28 16:21:16 by jaguillo         ###   ########.fr       */
>>>>>>> 7bab9185989827387f167c514ae715e735c7dfd5
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

	handle_resize(&env);
	update_size(&env);
	init_ncurses();
	//start_menu(&env);
	init_game(&env, 4); // tmp
	endwin();
	return (0);
}
