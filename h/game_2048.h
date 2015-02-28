/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_2048.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:29:28 by jaguillo          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/02/28 16:53:16 by wide-aze         ###   ########.fr       */
=======
/*   Updated: 2015/02/28 16:50:16 by jaguillo         ###   ########.fr       */
>>>>>>> 7bab9185989827387f167c514ae715e735c7dfd5
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

# define WPUT(x,y,f,...)	wmove(stdscr, x, y), printw(f, ##__VA_ARGS__)

# define MAP_GET(e,x,y)		(env->game.map[(y)][(x)])

/*
** start_menu.c
*/
void			start_menu(t_env *env);

/*
** init_game.c
*/
void			init_game(t_env *env, int size);

/*
** game.c
** w
*/
void			start_game(t_env *env);
void			put_rand(t_env *env);
void			action_down(t_env *env);
void			action_up(t_env *env);
void			action_left(t_env *env);
void			action_right(t_env *env);

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

int				ft_itoab(int n, char *buff);

#endif
