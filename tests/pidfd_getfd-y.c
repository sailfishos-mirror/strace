#define PIDFD_PATH "<anon_inode:[pidfd]>"
#define FD0_PATH "</dev/full>"
#define SKIP_IF_PROC_IS_UNAVAILABLE skip_if_unavailable("/proc/self/fd/")

#include "pidfd_getfd.c"
