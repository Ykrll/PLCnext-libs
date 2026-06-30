// EVENT_TRIGGER native assembly code template.
// PHOENIX CONTACT Software embedded CLR native assembly builder tool generated source file.
// use this file to implement your own native code

#include "eclr.h"
#include "EventUtils.h"

#include "Arp/Plc/Commons/Esm/RtEventManagerProxy.hpp"


enum StatusCode : UInt16
{
    STATUS_OK               = 0,
    STATUS_EMPTY_EVENT_NAME = 1,
    STATUS_EVENT_NOT_FOUND  = 2
};


// class EventUtils.EVENT_TRIGGER implementation
void __PInvoke__ EventUtils::EVENT_TRIGGER::__Init()
{
    // implement your code here !

    executeOld = false;

    Done = false;
    Error = false;
    Status = STATUS_OK;
}

void __PInvoke__ EventUtils::EVENT_TRIGGER::__Process()
{
    // implement your code here !

    Done = false;
    Error = false;
    Status = STATUS_OK;

    if (!Execute)
    {
        executeOld = false;
        return;
    }

    if (executeOld)
    {
        return;
    }

    executeOld = true;

    if (EventName.GetLength() == 0)
    {
        Error = true;
        Status = STATUS_EMPTY_EVENT_NAME;
        return;
    }

    const char* eventName = EventName;
    auto rtEvent = Arp::Plc::Commons::Esm::RtEventManagerProxy::GetInstance().GetEvent(eventName);

    if (rtEvent == nullptr)
    {
        Error = true;
        Status = STATUS_EVENT_NOT_FOUND;
        return;
    }

    rtEvent->Set();

    Done = true;
}

EventUtils::EVENT_TRIGGER::EVENT_TRIGGER()
{
    // implement your constructor code here !
}

void __PInvoke__ EventUtils::EVENT_TRIGGER::ctor()
{
    // automatically generated auxiliary constructor : calls the constructor by displacement new operator !
    // @Begin automatically generated code, do not modify !
    new (this) EventUtils::EVENT_TRIGGER();
    // @End automatically generated code
}

