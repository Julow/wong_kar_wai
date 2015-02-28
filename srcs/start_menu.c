/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_menu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 11:44:06 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 16:53:13 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>

static void		print_menu(void)
{
	clear();
	printw("+==================================================+\n"
		"|_____222222_____0000000_____44__44_____888888_____|\n"
		"|_________22_____00___00_____44__44_____88__88_____|\n"
		"|_______22_______00___00_____444444_____888888_____|\n"
		"|_____22_________00___00_________44_____88__88_____|\n"
		"|_____222222_____0000000_________44_____888888_____|\n"
		"+==================================================+\n"
		"|                                                  |\n"
		"|                                                  |\n"
		"|   1 - Normal mode (4x4)                          |\n"
		"|                                                  |\n"
		"|                                                  |\n"
		"|   2 - Long mode (5x5)                            |\n"
		"|                                                  |\n"
		"|                                                  |\n"
		"+==================================================+\n");
	refresh();
}

void			start_menu(t_env *env)
{
	int				choice;

	print_menu();
	choice = 0;
	while (1)
	{
		choice = getch();
		if (choice == '1')
			init_game(env, 4);
		else if (choice == '2')
			init_game(env, 5);
		else
			continue ;
		return ;
	}
}
