/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 15:06:47 by wide-aze          #+#    #+#             */
/*   Updated: 2015/02/28 16:53:08 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

static int		give_rand_nb(void)
{
	if (ft_randbool())
		return (2);
	return (4);
}

static int		count_void_cases(t_env *env)
{
	int		i;
	int		j;
	int		count;

	count = 0;
	i = -1;
	while (++i < env->game.size)
	{
		j = -1;
		while (++j < env->game.size)
		{
			if (env->game.map[i][j] == 0)
				count++;
		}	
	}	
	return (count);
}

void			put_rand(t_env *env)
{
	int		nb;
	int		pos;
	int		i;
	int		j;

	nb = count_void_cases(env);
	pos = ft_rand(0, nb);
	i = -1;
	while (++i < env->game.size)
	{
		j = -1;
		while (++j < env->game.size)
		{
			if (env->game.map[i][j] == 0)
				count++;
			if (count == pos)
			{
				env->game.map[i][j] = give_rand_nb();
				return ;
			}
		}	
	}	

}

void			start_game(t_env *env)
{
	int		key;

	put_rand(env);
	put_rand(env);
	while ((key = getch()) != 27)
	{
		if (key == KEY_DOWN)
			action_down(env);			
		else if (key == KEY_UP)
			action_up(env);			
		else if (key == KEY_LEFT)
			action_left(env);			
		else if (key == KEY_RIGHT)
			action_right(env);
		else
				continue;
		draw_game(env);
	}
}