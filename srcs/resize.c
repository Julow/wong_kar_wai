/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resize.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:00:55 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 15:18:48 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"
#include <ncurses.h>
#include <signal.h>

t_env			*g_save = NULL;

static void		sig_handler(int sig)
{
	update_size(g_save);
	draw_game(g_save);
	(void)sig;
}

void			handle_resize(t_env *env)
{
	g_save = env;
	signal(SIGWINCH, &sig_handler);
}

void			update_size(t_env *env)
{
	getmaxyx(stdscr, env->height, env->width);
}
