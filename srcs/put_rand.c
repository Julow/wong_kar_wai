/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_rand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wide-aze <wide-aze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 10:40:30 by wide-aze          #+#    #+#             */
/*   Updated: 2015/03/01 14:55:39 by wide-aze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game_2048.h"

void			put_rand(t_env *env)
{
	int		nb;
	int		pos;
	int		i;
	int		j;

	if ((nb = count_void_cases(env)) == 0)
		return ;
	pos = ft_rand(0, nb - 1);
	i = -1;
	while (++i < env->map_size)
	{
		j = -1;
		while (++j < env->map_size)
		{
			if (env->map[i][j] == 0)
			{
				if (pos == 0)
				{
					env->map[i][j] = ft_randbool() ? 4 : 2;
					return ;
				}
				pos--;
			}
		}
	}
}
