// GetUnixTimeULINT native assembly code template.
// PHOENIX CONTACT Software embedded CLR native assembly builder tool generated source file.
// use this file to implement your own native code

#include "eclr.h"
#include "TimeUtils.h"

#include <time.h>


// class TimeUtils.GetUnixTimeULINT implementation
UInt64 __PInvoke__ TimeUtils::GetUnixTimeULINT::__Process()
{
    // implement your code here !
    
    timespec ts{};
    clock_gettime(CLOCK_MONOTONIC, &ts);

    return static_cast<UInt64>(ts.tv_sec) * 1000ULL + static_cast<UInt64>(ts.tv_nsec) / 1000000ULL;
}

