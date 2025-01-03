#ifndef __dbg_h__
#define __dbg_h__

#include <stdio.h>
#include <errno.h>
#include <string.h>

#define CLEAR   "\033[0m"

#define RED     "\033[91m"
#define GREEN   "\033[92m"
#define YELLOW  "\033[93m"
#define BLUE    "\033[94m"

#define BOLD      "\033[1m"
#define UNDERLINE "\033[4m"

#ifdef NDEBUG
#define debug(M, ...)
#else
#define debug(M, ...) fprintf(stderr, "[%s%sDBG%s] %s:%d: " M "\n",\
        GREEN, BOLD, CLEAR, __FILE__, __LINE__, ##__VA_ARGS__)
#endif

#define clean_errno() (errno == 0 ? "None" : strerror(errno))

#define log_err(M, ...) fprintf(stderr,\
        "[%sERR%s] (%s:%d: errno: %s) " M "\n", RED, CLEAR, __FILE__, __LINE__,\
        clean_errno(), ##__VA_ARGS__)

#define log_warn(M, ...) fprintf(stderr,\
        "[%sWRN%s] (%s:%d: errno: %s) " M "\n", YELLOW, CLEAR,\
        __FILE__, __LINE__, clean_errno(), ##__VA_ARGS__)

#define log_info(M, ...) fprintf(stderr, "[%s%sINF%s] (%s:%d) " M "\n", BOLD, UNDERLINE, CLEAR,\
        __FILE__, __LINE__, ##__VA_ARGS__)

#define check(A, M, ...) if(!(A)) {\
    log_err(M, ##__VA_ARGS__);\
    errno=0;\
    goto error;\
}

#define sentinel(M, ...)  {\
    log_err(M, ##__VA_ARGS__);\
    errno=0;\
    goto error;\
}

#define check_mem(A) check((A), "Out of memory.")

#define check_debug(A, M, ...) if(!(A)) {\
    (M, ##__VA_ARGS__);\
    errno=0;\
    goto error;\
}

#endif
