/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_menu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 14:41:10 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 14:41:11 by wide-aze         ###   ########.fr       */
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
		"|                   YOU WIN !!                     |\n"
		"|                                                  |\n"
		"|                You score is % -20d|\n"
		"|                                                  |\n"
		"|  Press ESC to quit / ENTER to continue the game  |\n"
		"|                                                  |\n"
		"|                                                  |\n"
		"+==================================================+\n", );
	refresh();
}

void			win_menu(t_env *env)
{
	int				choice;

	print_menu();
	choice = 0;
	while (1)
	{
		if (update_size(env))
			print_menu();
		choice = getch();
		if (choice == 27)
			return ;
		else if (choice == KEY_ENTER)
		{
			start_game(env);
			return ;
		}
	}
}
