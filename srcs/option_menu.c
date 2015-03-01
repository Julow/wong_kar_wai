/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_menu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 18:30:07 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/01 19:41:16 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>
#include <stdlib.h>

void			option_menu(t_env *env)
{
	t_menu			menu;
	int				select;
	const char		*choices[] = {"Back"};

	menu = (t_menu){(char**)choices, 0, 1, NULL};
	while (1)
	{
		select = select_menu(env, &menu);
		if (select == -1)
		{
			endwin();
			exit(0);
		}
		else if (select == 0)
			break ;
	}
}
