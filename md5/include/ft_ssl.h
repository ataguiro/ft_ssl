#ifndef FT_SSL_H
# define FT_SSL_H

# include <stdlib.h>
# include <unistd.h>

/*
** That's for setting options easily
*/

uint8_t g_options = 0;
# define ISON(x, y) (x & (1 << y))
# define ADD_OPT(x, y) (x |= (1 << y))

#endif
