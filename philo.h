#ifndef __philo__h__
# define __philo__h__


# include <strings.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>
# include <stdbool.h>

typedef struct s_philo {

    size_t n;
    size_t time_to_die;
    size_t time_to_eat;
    size_t time_to_sleep;
    size_t meals;
}               t_philo;

t_philo     *data;
pthread_t *philo;
pthread_mutex_t *forkk;

typedef struct s_book {

   pthread_t        philo;

   size_t           id;
   long             start;
   long             last_m;
   size_t           n_meals;
    int             flag;
   pthread_mutex_t  myfork;
   bool             is_eating;

}               t_book;

struct timeval bdyatlkhal9;

t_book *wise;
int flag = 0;
pthread_mutex_t  print;
pthread_mutex_t  inc_meal;
#endif
