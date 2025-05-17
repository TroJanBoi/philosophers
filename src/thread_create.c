/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:30:51 by pesrisaw          #+#    #+#             */
/*   Updated: 2025/05/17 16:39:23 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	create_threads(int nOp, t_philo *philos)
{
	int	i;

	i = 0;
	while (i < nOp)
	{
		philos[i].id = i + 1;
		philos[i].state = THINKING;
		i++;
	}
	return (0);
}
