#include "../src/philo.h"

void *print_debug_nop(t_philo *philo, int nop)
{
    int i;

    i = 0;
    while (i < nop)
    {
        printf("Philosopher %d is thinking\n", philo[i].id);
        i++;
    }
    return (NULL);
}