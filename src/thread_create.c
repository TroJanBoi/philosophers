#include "philo.h"

int create_threads(int nOp, t_philo *philos)
{
    int i;

    i = 0;
    while (i < nOp)
    {
        philos[i].id = i + 1;
        philos[i].state = THINKING;
        i++;
    }
    return (0);
}