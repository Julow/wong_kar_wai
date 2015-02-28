/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ncurses.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 11:15:44 by wide-aze          #+#    #+#             */
/*   Updated: 2015/02/28 11:21:07 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <stdlib.h>

void	init_ncurses(void)
{
	initscr();
	noecho();
	keypad(stdscr, TRUE);
}

void	destroy_ncurses(void)
{
	endwin();
	exit(0);
}
