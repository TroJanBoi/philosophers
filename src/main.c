/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:30:44 by pesrisaw          #+#    #+#             */
/*   Updated: 2025/05/17 16:42:06 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// format input of the test
// [number of philosophers] [time to die] [time to eat] ->
// -> [time to sleep] [number of times each philosopher must eat]

void	state_philosopher(int id, int state)
{
	if (state == TAKEN_FORK)
		printf("%.2lld %d has taken a fork\n", timeval_to_ms(), id);
	else if (state == EATING)
		printf("%.2lld %d is eating\n", timeval_to_ms(), id);
	else if (state == SLEEPING)
		printf("%.2lld %d is sleeping\n", timeval_to_ms(), id);
	else if (state == THINKING)
		printf("%.2lld %d is thinking\n", timeval_to_ms(), id);
	else if (state == DIED)
		printf("%.2lld %d died\n", timeval_to_ms(), id);
}

void	*thread_philos(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	if (!philo)
		return (NULL);
	state_philosopher(philo->id, philo->state);
	return (NULL);
}

int	main(int argc, char **argv)
{
	t_philo		*philos;
	int			nop;

	if (argc < 5 || argc > 6)
		ft_error("Error: Invalid number of arguments\n");
	nop = atoi(argv[1]);
	printf("Number of philosophers: %d\n", nop);
	philos = malloc(sizeof(t_philo) * nop);
	if (!philos)
		ft_error("Error: Memory allocation failed\n");
	if (create_threads(nop, philos) != 0)
	{
		free(philos);
		ft_error("Error: Thread creation failed\n");
	}
	thread_philos(philos);
}
