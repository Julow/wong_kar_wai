/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_2048.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:29:28 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 13:00:12 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_2048_H
# define GAME_2048_H

# include "libft.h"

enum			e_const
{
	WIN_VALUE = 1024
	WIN_VALUE = 2048
	WIN_VALUE = 2048
};

typedef struct	s_game
{
	int				**map;
	int				size;
	int				score;
}				t_game;

typedef struct	s_env
{
	int				width;
	int				height;
	t_game			game;
}				t_env;

/*
** start_menu.c
*/
void			start_menu(t_env *env);

/*
** init_game.c
*/
void			init_game(int size);

/*
** game.c
** w
*/

/*
** draw.c
** j
*/

/*
** resize.c
** j
*/
void			handle_resize(t_env *env)

#endif
