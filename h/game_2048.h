/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_2048.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaguillo <jaguillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:29:28 by jaguillo          #+#    #+#             */
/*   Updated: 2015/03/01 15:14:53 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_2048_H
# define GAME_2048_H

# include "libft.h"

typedef enum	e_const
{
	WIN_VALUE = 8
}				t_const;

typedef struct	s_env
{
	int				**map;
	int				map_size;
	int				score;
	int				win_width;
	int				win_height;
	t_bool			win;
}				t_env;

# define WPUT(x,y,f,...)	wmove(stdscr, y, x), printw(f, ##__VA_ARGS__)

# define MAP_GET(e,x,y)		(env->map[(y)][(x)])

/*
** menus.c
*/
void			start_menu(t_env *env);
void			win_menu(t_env *env);
void			end_menu(t_env *env);

/*
** init_game.c
*/
void			init_game(t_env *env, int size);

/*
** game.c
** w
*/
void			start_game(t_env *env);
int				count_void_cases(t_env *env);
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
t_bool			update_size(t_env *env);

/*
** utils
*/
int				ft_rand(int min, int max);
t_bool			ft_randbool(void);

t_bool			is_power(int nb, int p);

int				ft_itoab(int n, char *buff);

#endif
