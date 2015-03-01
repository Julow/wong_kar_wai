/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_menu.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 14:41:10 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 17:17:18 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>

static void		print_menu(t_env *env, t_bool best)
{
	clear();
	printw("+==================================================+\n"
		"|_____222222_____0000000_____44__44_____888888_____|\n"
		"|_________22_____00___00_____44__44_____88__88_____|\n"
		"|_______22_______00___00_____444444_____888888_____|\n"
		"|_____22_________00___00_________44_____88__88_____|\n"
		"|_____222222_____0000000_________44_____888888_____|\n"
		"+==================================================+\n"
		"|                                                  |\n");
	if (best)
		printw("|                  BEST SCORE!!                    |\n");
	else
		printw("|                   YOU LOSE!!                     |\n");
	printw("|                                                  |\n"
		"|                You score is % -20d |\n"
		"|                                                  |\n"
		"|                Press ESC to quit                 |\n"
		"|                                                  |\n"
		"|                                                  |\n"
		"+==================================================+\n", env->score);
	refresh();
}

void			end_menu(t_env *env)
{
	int				choice;
	t_bool			best;

	if (env->score > env->best_score)
	{
		env->best_score = env->score;
		set_best_score(env->best_score);
		best = true;
	}
	else
		best = false;
	print_menu(env, best);
	choice = 0;
	while (1)
	{
		if (update_size(env))
			print_menu(env, best);
		choice = getch();
		if (choice == 27)
			return ;
	}
}
