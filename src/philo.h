#ifndef PHILO_H

# define PHILO_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>

# define TAKEN_FORK 0
# define EATING     1
# define SLEEPING   2
# define THINKING   3
# define DIED       4

typedef struct s_philo
{
    int             id;
    int             state;
    pthread_t       *thread;
} t_philo;

void    ft_error(char *str);
void    *print_debug_nop(t_philo *philo, int nop);
int     create_threads(int nOp, t_philo *philos);

#endif

