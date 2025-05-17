#include "philo.h"

long long timeval_to_ms(void)
{
    struct timeval time;
    long long     ms;

    gettimeofday(&time, NULL);
    ms = (long long)time.tv_sec * 1000 + (long long)time.tv_usec / 1000;

    return (ms);
}