/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 18:30:41 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/01 19:12:39 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>

static void		refresh_menu(t_env *env, t_menu *menu)
{
	int				i;

	clear();
	printw("+==================================================+\n"
		"|_____222222_____0000000_____44__44_____888888_____|\n"
		"|_________22_____00___00_____44__44_____88__88_____|\n"
		"|_______22_______00___00_____444444_____888888_____|\n"
		"|_____22_________00___00_________44_____88__88_____|\n"
		"|_____222222_____0000000_________44_____888888_____|\n"
		"+==================================================+\n\n");
	if (menu->print != NULL)
		menu->print(env);
	i = -1;
	while (++i < menu->length)
	{
		if (i == menu->pos)
			printw("         ==> %s\n\n", menu->selects[i]);
		else
			printw("             %s\n\n", menu->selects[i]);
	}
	refresh();
}

int				select_menu(t_env *env, t_menu *menu)
{
	int				key;

	while (1)
	{
		refresh_menu(env, menu);
		key = getch();
		if (key == KEY_UP)
			menu->pos = (menu->pos - 1 + menu->length) % menu->length;
		else if (key == KEY_DOWN)
			menu->pos = (menu->pos + 1) % menu->length;
		else if (key == '\n')
			return (menu->pos);
		else if (key == 27)
			return (-1);
	}
}
