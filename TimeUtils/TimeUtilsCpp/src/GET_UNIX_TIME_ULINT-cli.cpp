// GET_UNIX_TIME_ULINT native assembly code template.
// PHOENIX CONTACT Software embedded CLR native assembly builder tool generated source file.
// use this file to implement your own native code

#include "eclr.h"
#include "TimeUtils.h"

#include <time.h>

// class TimeUtils.GET_UNIX_TIME_ULINT implementation
UInt64 __PInvoke__ TimeUtils::GET_UNIX_TIME_ULINT::__Process(Boolean p0)
{
    // implement your code here !

    timespec ts{};
    clock_gettime(CLOCK_REALTIME, &ts);

    return static_cast<UInt64>(ts.tv_sec) * 1000ULL + static_cast<UInt64>(ts.tv_nsec) / 1000000ULL;
}

