/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ncurses.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 11:15:44 by wide-aze          #+#    #+#             */
/*   Updated: 2015/02/28 12:06:25 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <stdlib.h>

void	init_ncurses(void)
{
	if (WIN_VALUE)
	{	
		ft_putendl_fd("", 2);
		exit(0);
	}
	initscr();
	noecho();
	keypad(stdscr, TRUE);
}

void	destroy_ncurses(void)
{
	endwin();
	exit(0);
}
