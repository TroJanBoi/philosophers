#include "philo.h"

// format input of the test
// [number of philosophers] [time to die] [time to eat] [time to sleep] [number of times each philosopher must eat]]

void	state_philosopher(int id, int state)
{ 
	if (state == TAKEN_FORK)
		printf("timestamp_in_ms X has taken a fork\n");
	else if (state == EATING)
		printf("timestamp_in_ms X is eating\n");
	else if (state == SLEEPING)
		printf("timestamp_in_ms X is sleeping\n");
	else if (state == THINKING)
		printf("timestamp_in_ms X is thinking\n");
	else if (state == DIED)
		printf("timestamp_in_ms X died\n");
}

void	*thread_philos(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	if (!philo)
		return (NULL);
	state_philosopher(philo->id, philo->state);
}

int		main(int argc, char **argv)
{
	t_philo		*philos;
	int 		nOp;

	if (argc < 5 || argc > 6)
		ft_error("Error: Invalid number of arguments\n");
	nOp = atoi(argv[1]);
	printf("Number of philosophers: %d\n", nOp);
	philos = malloc(sizeof(t_philo) * nOp);
	if (!philos)
		ft_error("Error: Memory allocation failed\n");
	if (create_threads(nOp, philos) != 0)
	{
		free(philos);
		ft_error("Error: Thread creation failed\n");
	}
	print_debug_nop(philos, nOp);
}
