#ifndef __EVENTUTILS_H__
#define __EVENTUTILS_H__
// PHOENIX CONTACT Software eCLR Native Library Builder version 3.0.1043.0
// EventUtils.h native assembly header template.
// Use this file to implement and/or extend your native c++ classes.
// Insert additional private methods and member only outside of the @Begin/@End comment pair

#include "EclrInterfaces.h"

#include "EventUtils-version.h"
#include "Arp/Plc/Commons/Esm/RtEventManagerProxy.hpp"

// public scope class for library implementation
// use EventUtils::init() and EventUtils::loadLibrary() during startup 
// to make the library accessible by the managed application.

class EventUtils
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

    //#snfunctionblock
    class EVENT_TRIGGER : public Object
    {
        // @Begin automatically generated code, do not modify inside @Begin/@End comment pair !
    public:
        void __Init();
        void __Process();
        EVENT_TRIGGER();
        void ctor();
        Boolean Execute;  // offset=4
        Boolean Done;  // offset=5
        // @End automatically generated code
        // insert additional private methods and member here ! 
    
    private:
        bool executeOld = false;
        Arp::Plc::Commons::Esm::RtEvent::Ptr rtEvent;
    };


}; // class EventUtils

#endif //#ifndef __EVENTUTILS_H__
