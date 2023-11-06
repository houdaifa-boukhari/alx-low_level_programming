#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

# define ABS(x) \
    ({ \
        int abs_value = (x); \
        if (abs_value < 0) { \
            abs_value = -abs_value; \
        } \
        abs_value; \
    })

#endif
