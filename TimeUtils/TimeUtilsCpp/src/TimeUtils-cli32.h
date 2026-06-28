#ifndef __TIMEUTILS_H__
#define __TIMEUTILS_H__
// PHOENIX CONTACT Software eCLR Native Library Builder version 3.0.1043.0
// TimeUtils.h native assembly header template.
// Use this file to implement and/or extend your native c++ classes.
// Insert additional private methods and member only outside of the @Begin/@End comment pair

#include "EclrInterfaces.h"

#include "TimeUtils-version.h"

// public scope class for library implementation
// use TimeUtils::init() and TimeUtils::loadLibrary() during startup 
// to make the library accessible by the managed application.

class TimeUtils
{
    // @Begin automatically generated code, do not modify !
public:
    enum LibVersion { Major=1, Minor=0, Build=0, Revision=0 };
    //library user interface
    static bool init();
    static bool isCompatible(const EclrVersion& requestedVersion);
    static bool load(ClrAppDomain* pAppDomain);
    static bool unload(ClrAppDomain* pAppDomain);
    //automatic generated loader stub
    static bool loadLibrary();
    static bool checkLayout();

    static unsigned s_modulHndl;
    // @End automatically generated code

    //#snfunction
    class GetUnixTimeULINT : public Object
    {
        // @Begin automatically generated code, do not modify inside @Begin/@End comment pair !
    public:
        static UInt64 __Process(Int16 p0, UInt16 p1);
        // @End automatically generated code
        // insert additional private methods and member here ! 
    };


}; // class TimeUtils

#endif //#ifndef __TIMEUTILS_H__
