/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_2048.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:29:28 by jaguillo          #+#    #+#             */
/*   Updated: 2015/02/28 12:22:14 by jaguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_2048_H
# define GAME_2048_H

# include "libft.h"

typedef enum	e_const
{
	WIN_VALUE = 2048
}				t_const;

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
void			start_game(t_env *env);

/*
** draw.c
** j
*/
void			draw_game(t_env *env);

/*
** resize.c
** j
*/
void			handle_resize(t_env *env);
void			update_size(t_env *env);

/*
** utils.c
*/
int				ft_rand(int min, int max);
t_bool			ft_randbool(void);

#endif
