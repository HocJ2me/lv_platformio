#include <stdio.h>

#ifdef LOGGING
// logging is enabled
#include <stdarg.h>

// void debug_log(char* format, ...)
void debug_log(long long d)
{
    printf("%lld\n",d);
}

#else

// logging is disabled
#define log(...)

#endif
